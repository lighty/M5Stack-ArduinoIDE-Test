#include <M5Stack.h>

void setup(void) {
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.setWakeupButton(BUTTON_A_PIN);
}

void loop() {
  if (M5.BtnA.wasPressed()) {
    int num1 = random(10);
    int num2 = random(10);
    M5.Lcd.setTextColor(TFT_WHITE, TFT_BLACK);
    M5.Lcd.setTextDatum(MC_DATUM);
    M5.Lcd.drawNumber(num1, 160, 120, 8);
  }
  M5.update();
}
