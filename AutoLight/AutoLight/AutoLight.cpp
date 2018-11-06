

#include "Arduino.h"
#include "AutoLight.h"

AutoLight::AutoLight(int onTime)
{
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
  _onTime = (onTime * 100);
}

void AutoLight::execute()
{
  float luminVal = analogRead(A7);

  if(luminVal < 800)
  {
    int motion = digitalRead(8);

    if(motion == 1)
    { 
        digitalWrite(7, LOW);
          for(int i = 0; i < _onTime; i++)
            {
                delay(10);
            }
    }
  }

  else
  {
      digitalWrite(7, HIGH);
  }

  delay(100);
}
