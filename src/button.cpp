#include "button.h"
#include "led.h"
#include "espnow.h"



void butt() {
if (digitalRead(BTN) == LOW) {
        broadcast("btnon");
        delay(500);
     } else {
        //something?
     }
}