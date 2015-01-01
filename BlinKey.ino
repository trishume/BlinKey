#include <OnePixel.h>
#include <util/delay.h>
#include <avr/power.h>
#include "blink1.h"

const int ledPin = 0;
Adafruit_NeoPixel pix = Adafruit_NeoPixel(ledPin);

extern "C" {
  void setPix(unsigned char r, unsigned char g, unsigned char b) {
    pix.setPixelColor(r,g,b);
    pix.show();
  }
}

// the setup routine runs once when you press reset:
void setup() {
  clock_prescale_set(clock_div_1);
  pix.begin();
  setPix(0,0,200);
  blinkSetup();
}

// the loop routine runs over and over again forever:
void loop() {
  blinkLoop();
}
