#include <M5Stack.h>

unsigned long counter = 0;

void setup(void) {
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.setWakeupButton(BUTTON_A_PIN);
}

void loop() {
  if (M5.BtnA.wasPressed()) {
    counter++;
    M5.Lcd.setTextColor(TFT_WHITE, TFT_BLACK);
    M5.Lcd.setTextDatum(MC_DATUM);
    M5.Lcd.drawNumber(counter, 160, 120, 8);
  }
  M5.update();
}
