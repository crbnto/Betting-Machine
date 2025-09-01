#include "SceneManager.h"
#include "buttons.h"
#include "SceneGameOne.h"

SceneGameOne::SceneGameOne(Adafruit_ILI9341& display) : tft(display) {}

void SceneGameOne::setup() {
  tft.fillScreen(ILI9341_BLUE);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(3);
  tft.setCursor(100, 100);
  tft.println("Game One");
}

void SceneGameOne::loop() {
  // Draw/update things for Scene A

  if (checkLeftButton() or checkRightButton()) {
  }
}
