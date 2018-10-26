#include <M5Stack.h>

unsigned int num1 = 0;
unsigned int num2 = 0;

void setup(void) {
  M5.begin();
  M5.Lcd.fillScreen(TFT_BLACK);
  M5.Lcd.setTextColor(TFT_WHITE, TFT_BLACK);
  M5.Lcd.setTextDatum(MC_DATUM);
  M5.setWakeupButton(BUTTON_A_PIN);
  M5.setWakeupButton(BUTTON_B_PIN);
}

void loop() {
  if (M5.BtnA.wasPressed()) {
    M5.Lcd.fillScreen(TFT_BLACK);
    num1 = random(10);
    num2 = random(10);
    M5.Lcd.drawString(String(num1) + " x " + String(num2), 160, 120, 4); // サイズが5以上だと表示されない
  }
  if (M5.BtnB.wasPressed()) {
    M5.Lcd.fillScreen(TFT_BLACK);
    M5.Lcd.drawString(String(num1) + " x " + String(num2), 160, 80, 4);
    M5.Lcd.drawString(String(num1 * num2), 160, 160, 8);
  }
  M5.update();
}
