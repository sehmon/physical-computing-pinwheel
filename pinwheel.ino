/*
  Arduino Starter Kit example
 Project 9  - Motorized Pinwheel

 This sketch is written to accompany Project 9 in the
 Arduino Starter Kit

 Parts required:
 10 kilohm resistor
 pushbutton
 motor
 9V battery
 IRF520 MOSFET
 1N4007 diode

 Created 13 September 2012
 by Scott Fitzgerald

 http://www.arduino.cc/starterKit

 This example code is part of the public domain
 */

// named constants for the switch and motor pins
const int motorPin =  9; // the number of the motor pin

int switchState = 0;  // variable for reading the switch's status
int brightness = 0;
int fuel = 0;
int timer = 25;

void setup() {
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);
  fuel = 1000;
}

void loop() {
  // read the state of the switch value:
  switchState = digitalRead(switchPin);
  currentBrightness = analogRead(A0);

  // check if the switch is pressed.
  if (abs(analogRead(A0) - brightness) > 25 and timer > 25) {
    // turn motor on:
    fuel += 600
    brightness = currentBrightness
    timer = 0;
  }

  if (fuel >= 0){
    analogWrite(A0, fuel / 10);
    fuel -= 6;
  } else {
    analogWrite(A0, 0);
  }

  timer += 1;
}
