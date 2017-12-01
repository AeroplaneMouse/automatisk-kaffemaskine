#define pinSwitch 3
#define pinPotentiometer A0
#define pinKnap 4
#define pinGreenLED 6
#define pinRedLED 5

void setup() {
  /*
   * Set pinMode
   */
  pinMode(pinSwitch, INPUT_PULLUP);
  pinMode(pinKnap, INPUT_PULLUP);
  pinMode(pinGreenLED, OUTPUT);
  pinMode(pinRedLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
