int switchState = 0;


void allLedOn() {
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
}

void allLedOFf() {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
}

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  delay(250);
  allLedOn();
   delay(500);
   allLedOFf();

}

void loop() {
  switchState= digitalRead(2);

  if (switchState == LOW) {
      allLedOFf();

  } else {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      delay(250);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(250);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(250);
      allLedOn();
      delay(500);
      allLedOFf();
      delay(500);
      allLedOn();
      delay(500);
  }
}

