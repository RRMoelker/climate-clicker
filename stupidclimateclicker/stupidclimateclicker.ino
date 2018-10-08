int SERVO_PIN = 9;
int TIME_BETWEEN_PRESSES = 5 * 1000; // ms

void setup() {
  setupServo(SERVO_PIN);
}

void loop() {
  pressButton();
  delay(TIME_BETWEEN_PRESSES);
}
