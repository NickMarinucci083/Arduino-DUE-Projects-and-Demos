#include <Mouse.h> //Mouse emulation over native USB

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Mouse.move(random(-100, 100), random(-100, 100), 0);   // (x, y, scroll)
  delay(1000);
}
