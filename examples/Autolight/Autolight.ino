#include <AutoLight.h>


//WARNING!!! ---> FOR THOSE UNFAMILIAR WITH ELECTRICITY, MAKE SURE THE RELAY IS NOT ATTACHED TO ANY HIGH VOLTAGE!!! VOLTAGES OF 120V AND OVER CAN KILL YOU!!!
//Always refer to the data sheet for your specific relay!

//Before starting, safely remove all loads and power sources from the relay device!

//1. Upload this program to the arduino.
//2. Attach the IN pin on the relay to pin 7 on the Arduino.
//3. Attach the GND pin on the relay to a GND pin on the Arduino. (GND pin on the relay must be connected to atleast one GND pin on the Arduino)
//4. Attach the Vcc pin on the relay to a 5V pin on the Arudino. (or any other external 5V DC source)
//5. Attach one side of your load's open circuit to the NO (Normally Open) pin on the relay.
//6. Attach the other side of your load's open circut to the COM (Common) pin on the relay.
//7. Attach the LDR (Light Dependant Resistor) input to pin A7 on the Arduino.
//8. Attach the PIR motion sensor Data pin to pin 8 on the Arduino. 
//9. Attach the PIR motion sensor Vcc pin to a 5V pin on the Arduino. (or any other external 5V DC source)
//10. Attach the PIR motion sensor GND pin to any GND pin on the Arduino. (GND pin on the PIR sensor must be connected to atleast one GND pin on the Arduino)
//11. Power up your arduino with a 5V DC source.
//12. Enjoy!


/*                Enter the number of seconds that you want the light to stay on. In this case we have it on for 60 seconds when triggered.
                  | 
                  |
                  |
                  |
                  V     */
int duration = ( 60 );

AutoLight light(duration);

void setup()
{
  digitalWrite(7, HIGH); //This makes sure that the relay is turned off at the start. 
  delay(500);
}

void loop()
{
  light.execute();
  delay(10);  
}

