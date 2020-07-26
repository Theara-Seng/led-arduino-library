#include "led.h"

led led(13); 

void setup() {
 
led.initPin();
}

void loop() {

 led.blinks(500);

}
