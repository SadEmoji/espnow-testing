//ESP32-S3-Zero does not employ a USB to UART chip. 
//When flashing firmware, press and hold the BOOT button (GPIO0) and then connect the Type-C cable.

//libs
#include <Arduino.h>

//local includes
#include "led.h"
#include "button.h"
#include "espnow.h"



void setup() {
    //delay before anything to see everythin in debug, remove in final
    delay(5000);
    Serial.begin(9600);

    //button
    pinMode(BTN, INPUT_PULLUP);

    //wifi start
    esp_wifi_start();

    //get mac
    getMac();

    //init espNOW
    initESPN();

    //end of setup led status
    ledblinkstart();
    Serial.println("Setup is done");
    //now loop
}

void loop() {
    butt();
}