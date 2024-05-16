#include "M5StickCPlus2.h"


void setupScreen() {
  auto cfg = M5.config();
  StickCP2.begin(cfg);
  StickCP2.Display.setRotation(1);
  StickCP2.Display.setTextColor(GREEN);
  StickCP2.Display.setTextDatum(middle_center);
  StickCP2.Display.setTextFont(&fonts::Orbitron_Light_24);
  StickCP2.Display.setTextSize(1);
    int bat_level = StickCP2.Power.getBatteryLevel();
    StickCP2.Display.setCursor(10, 30);
    StickCP2.Display.printf("Battery: %d%%", bat_level);
}
