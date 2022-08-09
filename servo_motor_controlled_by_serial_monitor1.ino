// C++ code
//
#include <Servo.h>

int p1 = 0;
int p2 = 0;
int p3 = 0;
int p4 = 0;

Servo servo_6;
Servo servo_9;
Servo servo_10;
Servo servo_11;

void setup()
{
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  servo_6.attach(6, 500, 2500);
  pinMode(3, OUTPUT);
  servo_9.attach(9, 500, 2500);
  pinMode(4, OUTPUT);
  servo_10.attach(10, 500, 2500);
  pinMode(5, OUTPUT);
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  Serial.println("Write degree of s1");
  while (!(p1 > 0 && p1 <= 180)) 
  {
    while (Serial.available()==0)
    {}
    p1 = Serial.parseInt();
  }
  
  digitalWrite(2, HIGH);
  servo_6.write(p1);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(2, LOW);
  Serial.println("Write degree of s2");
   while (!(p2 > 0 && p2 <= 180)) 
  {
    while (Serial.available()==0)
    {}
    p2 = Serial.parseInt(); 
  }
  
  digitalWrite(3, HIGH);
  servo_9.write(p2);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(3, LOW);
  Serial.println("Write degree of s3");
   while (!(p3 > 0 && p3 <= 180)) 
  {
    while (Serial.available()==0)
    {}
    p3 = Serial.parseInt();
  }
  
  digitalWrite(4, HIGH);
  servo_10.write(p3);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(4, LOW);
  Serial.println("Write degree of s4");
   while (!(p4 > 0 && p4 <= 180)) 
  {
    while (Serial.available()==0)
    {}
    p4 = Serial.parseInt(); 
  }
  
  digitalWrite(5, HIGH);
  servo_11.write(p4);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(5, LOW);
  p1=0,p2=0,p3=0,p4=0;
}