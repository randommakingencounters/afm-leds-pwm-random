// controlling LEDs using PWM and random

// define the pins our LEDs will connect to
// these pins must support PWM
int yellow01 = 5;
int yellow02 = 6;
int yellow03 = 9;


void setup() {
  // set the pins outputs
  pinMode(yellow01, OUTPUT);
  pinMode(yellow02, OUTPUT);
  pinMode(yellow03, OUTPUT);
}

void loop() {
  // display each LED with a different brightness
  // comment out when using the random code below
  // PWM value range 0 - 255
  analogWrite(yellow01, 10);
  analogWrite(yellow02, 127);
  analogWrite(yellow03, 245);


  // new flame flicker with random and PWM
  // uncomment to use random values
  // random max value should always be +1 the desired max value
  // analogWrite(yellow01, random(50, 100));
  // analogWrite(yellow02, random(100, 256));
  // analogWrite(yellow03, random(50, 100));
  // //pause for a random duration to create variability in flicker
  // delay(random(50, 200));

  // the code will return to the top and begin again
}