#include <Servo.h>

Servo servo;

int pin;
void setupServo(int servoPin) {
  pin = servoPin;
}

void attachServo() {
  servo.attach(pin);
}

void detachServo() {
  servo.detach();
}

int stepDelay = 100;
int startPos = 130;
int pushPos = 118;
void pressButton() {
  int pos;
  for (pos = startPos; pos >= pushPos; --pos) {
    servo.write(pos);
    delay(stepDelay);
  }
  delay(50);
  for (pos = pushPos; pos <= startPos; ++pos) {
    servo.write(pos);
    delay(stepDelay);
  }
}

