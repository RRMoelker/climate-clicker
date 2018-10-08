#include <Servo.h>

Servo servo;

void setupServo(int pin) {
  servo.attach(pin);
}

int stepDelay = 100;
int startPos = 145;
int pushPos = 120;
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
