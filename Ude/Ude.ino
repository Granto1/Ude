#include <Wire.h> // Wire library
#include <cmath> // math stuffs
#include <SoftwareSerial.h> // Software library for bluetooth

// for bluetooth connections...
int RX;
int TX;

SoftwareSerial BTSerial(RX, TX) // bluetooth reader

// Motor stuffs below (at some point)


// Joystick ??

int xVal, yVal; // input from joystick


// Arm declaration
int j1, j2; // length of joints (m)

// Port numbers
int attch_port; // for controlling potential attachments
int base_stepper; // stepper motor at the base
int serv_1, serv_2; // two servos of external joints

void setup() {
  // put your setup code here, to run once:
  delay(10000); // boot up delay
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  if (BTSerial.available())
//  {
//    char data = BTSerial.read();
//    
//  }
}

// kinematics
void kin()
{
  
}
void rotate_base()
{
  
}
void attch_act()
{
  
}
