// Listing 14-1, Servo Motor

#include <Servo.h>
Servo myservo;
int angle = 95;   // set to neutral position


void setup() 
{
  myservo.attach (4);   // control pin on digital 4
  Serial.begin(9600);
  Serial.println("Enter angle between 0 and 180:");
}



void loop() 
{
  while (Serial.available() != 0)

  {
    angle = Serial.parseInt();       // read input 
    Serial.print("Received: ");
    Serial.println(angle);        // confirm input
    
   myservo.write (angle);     // write input to motor
   delay (3000);
    
   myservo.write (95);      // reset to neutral position so motor stops running
   delay (1000);
  }

}

