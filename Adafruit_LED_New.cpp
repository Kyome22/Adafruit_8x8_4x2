#include "Adafruit_LED_New.h"

//Adafruit_LED_New class
Adafruit_LED_New::Adafruit_LED_New(void) {
}

//begin
void Adafruit_LED_New::begin(uint8_t _addr = 0x70) {
  i2c_addr = _addr;
  Wire.begin();
  Wire.beginTransmission(i2c_addr);
  Wire.write(0x21);  // turn on oscillator
  Wire.endTransmission();
  blinkRate(BLINK_OFF);
  setBrightness(15); // max brightness
}

//setBrightness
void Adafruit_LED_New::setBrightness(uint8_t b) {
  if (b > 15) b = 15;
  Wire.beginTransmission(i2c_addr);
  Wire.write(CMD_BRIGHTNESS | b);
  Wire.endTransmission();
}
void Adafruit_LED_New::setBrightness(uint8_t b, uint8_t _addr) {
  if (b > 15) b = 15;
  Wire.beginTransmission(_addr);
  Wire.write(CMD_BRIGHTNESS | b);
  Wire.endTransmission();
}

//blinkRate
void Adafruit_LED_New::blinkRate(uint8_t b) {
  Wire.beginTransmission(i2c_addr);
  if (b > 3) b = 0; // turn off if not sure

  Wire.write(BLINK_CMD | BLINK_DISPLAYON | (b << 1));
  Wire.endTransmission();
}
void Adafruit_LED_New::blinkRate(uint8_t b, uint8_t _addr) {
  Wire.beginTransmission(_addr);
  if (b > 3) b = 0; // turn off if not sure
  Wire.write(BLINK_CMD | BLINK_DISPLAYON | (b << 1));
  Wire.endTransmission();
}

//writeDisplay
void Adafruit_LED_New::writeDisplay(uint8_t _addr) {
  Wire.beginTransmission(_addr);
  Wire.write((uint8_t)0x00); // start at address $00

  for (uint8_t i=0; i<8; i++) {
    Wire.write(displaybuffer[i] & 0xFF);
    Wire.write(displaybuffer[i] >> 8);
  }
  Wire.endTransmission();
}

//clear
void Adafruit_LED_New::clear(void) {
  for (uint8_t i=0; i<8; i++) {
    displaybuffer[i] = 0;
  }
}

//Adafruit_8x8matrix class
Adafruit_8x8matrix::Adafruit_8x8matrix(void) {
}

//drawBitmap
void Adafruit_8x8matrix::drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t OnOff) {
  int16_t i, j, byteWidth = (w + 7) / 8;
  uint8_t byte;

  for(j=0; j<h; j++) {
    for(i=0; i<w; i++ ) {
      if(i & 7) byte <<= 1;
      else      byte   = bitmap[j * byteWidth + i / 8];
      if(byte & 0x80) drawPixel(x+i, y+j, OnOff);
    }
  }
}

//drawPixel
void Adafruit_8x8matrix::drawPixel(int16_t x, int16_t y, uint16_t OnOff) {
  if ((y < 0) || (y >= 8)) return; //for error
  if ((x < 0) || (x >= 8)) return; //for error

  if (OnOff) {
    displaybuffer[y] |= (0x80 >> x);
  } else {
    displaybuffer[y] &= ~(0x80 >> x);
  }
}
