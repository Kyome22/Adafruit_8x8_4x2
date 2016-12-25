#include <Wire.h>
#include "Adafruit_LED_New.h" //必要なものだけを抽出して作り直したライブラリ
#include "font.h" //仮のフォントファイル

//---------Setting-----------
const int TYPE = 1;
const float ON_SECOND = 3.0;
const float OFF_SECOND = 1.0;
const uint8_t BRIGHTNESS = 0; //0..15
const uint8_t BLINK = 0; //0..3
const uint8_t I2C_ADDR_BASE = 0x70;
//---------------------------

Adafruit_8x8matrix matrix = Adafruit_8x8matrix();
uint8_t addr_tbl[8] = {0x70, 0x74, 0x72, 0x76, 0x71, 0x75, 0x73, 0x77};
uint8_t box[8] = {};
int count;

uint8_t fontBox(int c, int n){
  switch (TYPE) {
    case 1: return font1[c][n];
    case 2: return font2[c][n];
    case 3: return font3[c][n];
    case 4: return font4[c][n];
    case 5: return font5[c][n];
    case 6: return font6[c][n];
    case 7: return font7[c][n];
  }
}

int fontSize(){
  switch (TYPE) {
    case 1: return sizeof(font1)/sizeof(font1[0]);
    case 2: return sizeof(font2)/sizeof(font2[0]);
    case 3: return sizeof(font3)/sizeof(font3[0]);
    case 4: return sizeof(font4)/sizeof(font4[0]);
    case 5: return sizeof(font5)/sizeof(font5[0]);
    case 6: return sizeof(font6)/sizeof(font6[0]);
    case 7: return sizeof(font7)/sizeof(font7[0]);
  }
}

void setup(){
  count = 0;
  pinMode(13, OUTPUT);  //L LED
  digitalWrite(13, LOW);
  //randomSeed(analogRead(0));
  SerialUSB.begin(9600);
  SerialUSB.println("8x8 to 8x2 LED Matrix");
  for(int i = 0; i < 8; i++){
    matrix.begin(addr_tbl[(I2C_ADDR_BASE+i)&0x7]);
  }
  matrix.clear();
  for(int i = 0; i < 8; i++){
    uint8_t addr = addr_tbl[(I2C_ADDR_BASE+i)&0x7];
    matrix.writeDisplay(addr);
    matrix.setBrightness(BRIGHTNESS, addr);
    matrix.blinkRate(BLINK, addr);
  }
  delay(1000);
}

void loop(){
  for(int j = 0; j < 8; j++){
    for(int i = 0; i < 8; i++){
      box[i] = fontBox(count, i);
      SerialUSB.println(box[i], BIN);
    }
    count = (count+1)%fontSize();
    matrix.clear();
    matrix.drawBitmap(0, 0, box, 8, 8, LED_ON);
    matrix.writeDisplay(addr_tbl[j]);
  }
  digitalWrite(13, HIGH);  // L LED
  delay(ON_SECOND * 1000);
  for(int j = 0; j < 8; j++){
    matrix.clear();
    matrix.writeDisplay(addr_tbl[j]);
  }
  digitalWrite(13, LOW);  // L LED
  delay(OFF_SECOND * 1000);
}
