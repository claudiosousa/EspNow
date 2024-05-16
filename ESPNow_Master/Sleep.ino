/*
Deep Sleep with External Wake Up
=====================================
This code displays how to use deep sleep with
an external trigger as a wake up source and how
to store data in RTC memory to use it over reboots

This code is under Public Domain License.

Hardware Connections
======================
Push Button to GPIO 37 pulled up with a 10K Ohm
resistor

NOTE:
======
Only RTC IO can be used as a source for external wake
source. They are pins: 0,2,4,12-15,25-27,32-39.
*/

#define BUTTON_PIN_BITMASK 0x2000000000  // 2^37 in hex

void setupSleep() {
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_37, 0);  //1 = High, 0 = Low
}

bool isWakeupFromButtonPressed() {
  esp_sleep_wakeup_cause_t wakeup_reason = esp_sleep_get_wakeup_cause();
  bool is_rtc_wakeup = wakeup_reason == ESP_SLEEP_WAKEUP_EXT0;
  if (is_rtc_wakeup) Serial.println("Is RPC wake up.");
  return is_rtc_wakeup;
}

void enter_deep_sleep() {
  esp_deep_sleep_start();
}

void shutDownDevices() {
}