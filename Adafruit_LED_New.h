#ifndef ADAFRUIT_LED_NEW_H
#define ADAFRUIT_LED_NEW_H

//version control
#if (ARDUINO >= 100)
  #include "Arduino.h"
  #include "Print.h"
#else
  #include "WProgram.h"
#endif

//include important source
#include <Wire.h> //need in main source code
// #include "Adafruit_GFX.h"

#define LED_ON 1
#define LED_OFF 0
#define BLINK_CMD 0x80 //need in blinkRate
#define BLINK_DISPLAYON 0x01 //need in blinkRate
#define BLINK_OFF 0 //need in begin
#define CMD_BRIGHTNESS 0xE0 //need in setBrightness

// this is the raw HT16K33 controller
class Adafruit_LED_New {
public:
  Adafruit_LED_New(void);
  void begin(uint8_t _addr);
  void setBrightness(uint8_t b);
  void setBrightness(uint8_t b, uint8_t _addr);
  void blinkRate(uint8_t b);
  void blinkRate(uint8_t b, uint8_t _addr);
  void writeDisplay(uint8_t _addr);
  void clear(void);
  uint16_t displaybuffer[8];
protected:
  uint8_t i2c_addr;
};

class Adafruit_8x8matrix : public Adafruit_LED_New, public Print {
public:
  Adafruit_8x8matrix(void);
  void drawBitmap(int16_t x, int16_t y, uint8_t *bitmap, int16_t w, int16_t h, uint16_t OnOff);
  void drawPixel(int16_t x, int16_t y, uint16_t OnOff);
  #if ARDUINO >= 100
    virtual size_t write(uint8_t);
  #else
    virtual void   write(uint8_t);
  #endif
private:
};

#endif // ADAFRUIT_LED_NEW_H
