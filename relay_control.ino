#define RELAY1 2

void setup() {
  pinMode(RELAY1, OUTPUT);
}

void loop() {
  digitalWrite(RELAY1, HIGH); //turn on
  delay(3000);
  digitalWrite(RELAY1, LOW); //turn off
  delay(3000);
}
