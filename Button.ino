/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int LED = 4;     // the number of the pushbutton pin
const int Buzzer =  3;// the number of the LED pin
const int Light = A0;
const int Touch = A1;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(Buzzer, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(LED, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(Touch);
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (sensorValue0 < 300) {
    // turn LED on:
    digitalWrite(LED, HIGH);
  } else {
    // turn LED off:
    digitalWrite(LED, LOW);
  }
  if (sensorValue1 > 300) {
    // turn LED on:
    digitalWrite(Buzzer, HIGH);
  } else {
    // turn LED off:
    digitalWrite(Buzzer, LOW);
  }
}
  
