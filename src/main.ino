//ESP32-S3-Zero does not employ a USB to UART chip. 
//When flashing firmware, press and hold the BOOT button (GPIO0) and then connect the Type-C cable.

//libs
#include <esp_now.h>
#include <esp_wifi.h>
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

//local includes
#include "led.h"
#include "button.h"



void setup() {
    //wifi start
    esp_wifi_start();

}

void loop() {
    
}