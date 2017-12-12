#define pinKaffe 12
#define pinKaffeOgVarme 11
#define pinDebug 13
#define pinKnap 7

bool kaffeState = false;

void setup() {
  pinMode(pinKaffe, OUTPUT);
  pinMode(pinKaffeOgVarme, OUTPUT);
  pinMode(pinKnap, INPUT_PULLUP);
  pinMode(pinDebug, OUTPUT);

  Serial.begin(9600);

  slukKaffemaskine();
}

void loop() {
  int knapTryk = !digitalRead(pinKnap);
  if(knapTryk) {
    Serial.println("ON!");
    lavKaffeMedVarme();
    float delayTime = 180000;
    while(delayTime > 0) {
      delay(1000);
      delayTime -= 1000;
      Serial.println(delayTime / 1000);
    }
    slukKaffemaskine();
    Serial.println("OFF");
  }
}

void lavKaffe() {
  digitalWrite(pinKaffe, HIGH);
  kaffeState = true;
  digitalWrite(pinDebug, HIGH);
}

void lavKaffeMedVarme() {
  digitalWrite(pinKaffeOgVarme, HIGH);
  kaffeState = true;
  digitalWrite(pinDebug, HIGH);
}

void slukKaffemaskine() {
  digitalWrite(pinKaffe, LOW);
  digitalWrite(pinKaffeOgVarme, LOW);
  kaffeState = false;
  digitalWrite(pinDebug, LOW);
}

