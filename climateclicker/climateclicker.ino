int SERVO_PIN = 9;
int TIME_BETWEEN_PRESSES = 15 * 60 * 1000; // ms

void setup() {
  setupServo(SERVO_PIN);
}

void loop() {
  attachServo();
  pressButton();
  detachServo();
  delay(TIME_BETWEEN_PRESSES);
}
