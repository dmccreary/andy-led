# See https://github.com/dmccreary/moving-rainbow

#include <Adafruit_NeoPixel.h>
#include <avr/interrupt.h>

#define LEDPIN 12 // connect the Data In pin
#define NUMBER_PIEXELS 8// connect the Data In pin
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMBER_PIEXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

loop() {
  candle();
}

void candle() {
   uint8_t green; // brightness of the green 
   uint8_t red;  // add a bit for red
   for(uint8_t i=0; i<100; i++) {
     green = 50 + random(100);
     red = green + random(50) + 50;
     strip.setPixelColor(random(strip.numPixels()), red, green, 0);
     strip.show();
     delay(5);
  }
}