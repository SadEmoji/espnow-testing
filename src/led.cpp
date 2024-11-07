
#include "led.h"



void ledblink() {
    // digitalWrite(RGB_BUILTIN, HIGH);   // Turn the RGB LED white
  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,RGB_BRIGHTNESS,RGB_BRIGHTNESS); // Red
  delay(100);
  // digitalWrite(RGB_BUILTIN, LOW);    // Turn the RGB LED off
  neopixelWrite(RGB_BUILTIN,0,0,0); // Red
  delay(100);

  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,0,0); // Red
  delay(100);
  neopixelWrite(RGB_BUILTIN,0,RGB_BRIGHTNESS,0); // Green
  delay(100);
  neopixelWrite(RGB_BUILTIN,0,0,RGB_BRIGHTNESS); // Blue
  delay(100);
  neopixelWrite(RGB_BUILTIN,0,0,0); // Off / black
  delay(100);
}

void ledblinkstart() {
  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,0,0); // Green
  delay(100);
  neopixelWrite(RGB_BUILTIN,0,0,0); // Off / black
  delay(500);
  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,0,0); // Green
  delay(100);
  neopixelWrite(RGB_BUILTIN,0,0,0); // Off / black
}