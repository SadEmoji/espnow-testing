#include "button.h"
#include "led.h"

pinMode(BTN, INPUT_PULLUP);

void butt() {

if (digitalRead(BTN) == LOW) {
        ledblink();
     } 

}