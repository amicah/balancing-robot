#include <Balance.h>

  int Value = 0;
void setup() {
}

  Balance control(1,1,1,0);
void loop() {
  control.UpdatePID(Value);
}

