#include <OnePixel.h>
#include <util/delay.h>
#include <avr/power.h>
#include "blink1.h"

const int ledPin = 0;
Adafruit_NeoPixel pix = Adafruit_NeoPixel(ledPin);
int state = 0;
unsigned int rt = 0;
unsigned int bt = 0;

extern "C" {
  void setPix(unsigned char r, unsigned char g, unsigned char b) {
    pix.setPixelColor(r,g,b);
    pix.show();
  }
}

// the setup routine runs once when you press reset:
void setup() {
  clock_prescale_set(clock_div_1);
  PORTB |= 1 << PB2; // pin 2 pullup

  pix.begin();
  setPix(0,0,200);
  blinkSetup();
}

// the loop routine runs over and over again forever:
void loop() {
  unsigned int t = millis();
  blinkLoop();
  if(!(PINB & (1<<PB2))) { // button pressed (PB2 at ground voltage)
    if(state == 0 && (t-bt) > 100) {
      pressDown();
      pressUp();
      bt = t;
    }
    state = 1;
    /* _delay_ms(5); */
    setPix(0,100,0);
  } else {
    state = 0;
  }
  rt = t;
}
