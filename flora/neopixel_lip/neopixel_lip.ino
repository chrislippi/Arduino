#include <Adafruit_NeoPixel.h>

#define PIN 8

Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  colorChange(strip.Color(255, 0, 0), 500); // Set Pixel to Red and wait length to 500
  colorChange(strip.Color(0, 255, 0), 500); // Set Pixel to Red and wait length to 500
  colorChange(strip.Color(0, 0, 255), 500); // Set Pixel to Red and wait length to 500
}

void colorChange(uint32_t c, uint8_t wait) {
  strip.setPixelColor(0, c);
  strip.show();
  delay(wait);
}

