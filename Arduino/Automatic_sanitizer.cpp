#include <Servo.h>

int duration,dist;
// servo is a object of Servo class
Servo servo;

void setup()
{ 
  servo.attach(9);
  // this is for the ultraSound sensor
  pinMode(4, OUTPUT);
  pinMode(5,INPUT);
  servo.write(0);
}

void loop()
{
  digitalWrite(4,LOW);
  delayMicroseconds(5);
  digitalWrite(4,HIGH);
  delayMicroseconds(15);
  digitalWrite(4,LOW);
 // for ultrasonic sensor to get distance.
  duration = pulseIn(5,HIGH);
  dist = (duration * 0.034)/2;
  // to get the distance 
  delay(500);
  // mapping the distance value to the servo angle
  int value = map(dist,70,20,0,150);
  // writing the value to the servo
  servo.write(value);

}
