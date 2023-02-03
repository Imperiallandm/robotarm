/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob

Further modified by Steve Baudains of Imperial Light and Magic Feb 2023
for Celebration Excel London showing how 4 servos con control a robotic arm


*/



#include <Servo.h>

Servo servo0;  // create servo object to control a servo
Servo servo1;  // create servo object to control a servo
Servo servo2;  // create servo object to control a servo
Servo servo3;  // create servo object to control a servo

int potpin0 = A0;  // analog pin used to connect the potentiometer
int potpin1 = A1;  // analog pin used to connect the potentiometer
int potpin2 = A2;  // analog pin used to connect the potentiometer
int potpin3 = A3;  // analog pin used to connect the potentiometer


int val0;    // variable to read the value from the analog pin
int val1;    // variable to read the value from the analog pin
int val2;    // variable to read the value from the analog pin
int val3;    // variable to read the value from the analog pin

void setup() {
  servo0.attach(9);  // attaches the servo on pin 9 to the servo object
  servo1.attach(10);  // attaches the servo on pin 9 to the servo object
  servo2.attach(11);  // attaches the servo on pin 9 to the servo object
  servo3.attach(12);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val0 = analogRead(potpin0);            // reads the value of the potentiometer (value between 0 and 1023)
  val0 = map(val0, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servo0.write(val0);                  // sets the servo position according to the scaled value
  delay(5);                           // waits for the servo to get there

  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servo1.write(val1);                  // sets the servo position according to the scaled value
  delay(5);                           // waits for the servo to get there

  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servo2.write(val2);                  // sets the servo position according to the scaled value
  delay(5);                           // waits for the servo to get there

  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val3, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servo3.write(val3);                  // sets the servo position according to the scaled value
  delay(5);                           // waits for the servo to get there
}
