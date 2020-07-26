#ifndef LED_H
#define LED_H

#include <Arduino.h>

class led
{
  public:
    led(int pin);
    void initPin();
    void blinks(int delays);
  private:
    int _pin;
};



#endif
