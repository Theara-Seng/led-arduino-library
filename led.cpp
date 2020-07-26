#include "led.h"

led::led(int pin){
  _pin=pin;
}
void led::initPin(){
  pinMode(_pin,OUTPUT);
}
void led::blinks(int delays){
  digitalWrite(_pin,HIGH);
  delay(delays);
  digitalWrite(_pin,LOW);
  delay(delays);
}
