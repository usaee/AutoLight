/*
  AutoLight.h - Library for controlling a light switch relay based on sensor
  values from a light dependant resistor and PIR motion sensor.
  Created by Aaron Caruso, November 6, 2018.
  Released into the public domain.
*/

#ifndef AutoLight_h
#define AutoLight_h

#include "Arduino.h"

class AutoLight
{
  public:
    AutoLight(int onTime);
    void execute();
  private:
    int _onTime;
};

#endif