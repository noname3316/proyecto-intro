
const int pir1 = 2;
const int pir2 = 3;
const int pir3 = 4;
const int pir4 = 5;

const int relay1 = 6;
const int relay2 = 7;
const int relay3 = 8;
const int relay4 = 9;

void setup() {
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(pir3, INPUT);
  pinMode(pir4, INPUT);

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);

  delay(20000);
}

void loop() {
  if (digitalRead(pir1) == HIGH) {
    digitalWrite(relay1, LOW);
  } else {
    digitalWrite(relay1, HIGH);
  }

  if (digitalRead(pir2) == HIGH) {
    digitalWrite(relay2, LOW);
  } else {
    digitalWrite(relay2,HIGH);
  }

  if (digitalRead(pir3) == HIGH) {
    digitalWrite(relay3, LOW);
  } else {
    digitalWrite(relay3, HIGH);
  }

  if (digitalRead(pir4) == HIGH) {
    digitalWrite(relay4, LOW);
  } else {
    digitalWrite(relay4, HIGH);
  }

 delay(1000);
}


