int ledPin = 13;
const int buzzer = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, INPUT);
}

void loop() {
  tone(buzzer, 1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(60000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(30000);
}
