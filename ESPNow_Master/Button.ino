#include "M5StickCPlus2.h"

void setupButton() {
}

bool buttonAPressed() {
  StickCP2.update();
  return StickCP2.BtnA.isPressed();
}