#include <Adafruit_NeoPixel.h>

#define PIN 8

Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  int wait=500;
  colorChange(strip.Color(255, 0, 0), wait); // Set to Red and wait time in ms
  colorChange(strip.Color(255,255,255), wait); // Set to white and wait time in ms
  colorChange(strip.Color(0, 255, 0), wait); // Set to Green and wait time in ms
  colorChange(strip.Color(255,255,0), wait); // Set to yellow and wait time in ms
  colorChange(strip.Color(0, 0, 255), wait); // Set to Blue and wait time in ms
  colorChange(strip.Color(165, 42, 42), wait); // Set to pink and wait time in ms
  colorChange(strip.Color(255,140,0), wait); // Set to orange and wait time in ms
  colorChange(strip.Color(0,255,255), wait); // Set to sea blue and wait time in ms
}

void colorChange(uint32_t c, int wait) {
  strip.setPixelColor(0, c);
  strip.show();
  delay(wait);

}

