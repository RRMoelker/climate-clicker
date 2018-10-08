int SERVO_PIN = 9;

void setup() {
  setupServo(SERVO_PIN);
}

void loop() {
  pressButton();
  delay(2000);
}
