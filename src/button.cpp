#include "button.h"
#include "led.h"

void butt() {

if (digitalRead(BTN) == LOW) {
        ledblink();
     } 

}