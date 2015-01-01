#include <OnePixel.h>
#include <util/delay.h>
//#include <HIDSerial.h>
//HIDSerial serial;

const int ledPin = 0;
Adafruit_NeoPixel pix = Adafruit_NeoPixel(ledPin);

void rainbow() {
  uint16_t j;

  for(j=0; j<256; j++) {
    pix.setPixelColor(j,0,255-j);
    pix.show();
    _delay_ms(8);
//    serial.poll();
  }
}

// the setup routine runs once when you press reset:
void setup() {
  pix.begin();
//  serial.begin();
}

// the loop routine runs over and over again forever:
void loop() {
  rainbow();
//  serial.println("Hi!");
}
