#include <M5Stack.h>

void setup(void) {
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.setWakeupButton(BUTTON_A_PIN);
}

void loop() {
  if (M5.BtnA.wasPressed()) {
    String num1 = String(random(10));
    String num2 = String(random(10));
    M5.Lcd.setTextColor(TFT_WHITE, TFT_BLACK);
    M5.Lcd.setTextDatum(MC_DATUM);
    M5.Lcd.drawString(num1+" x "+num2, 160, 120, 4); // サイズが5以上だと表示されない
  }
  M5.update();
}
