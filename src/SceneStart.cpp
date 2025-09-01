#include "SceneStart.h"
#include "SceneManager.h"
#include "buttons.h"
#include "SceneGameOne.h"

extern SceneGameOne sceneGameOne;

SceneStart::SceneStart(Adafruit_ILI9341& display) : tft(display) {}

void SceneStart::setup() {
  tft.fillScreen(ILI9341_BLUE);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(3);
  tft.setCursor(100, 100);
  tft.println("Casino");
}

void SceneStart::loop() {
  // Draw/update things for Scene A

  if (leftPressedOnce() || rightPressedOnce()) {
    switchToScene(&sceneGameOne);
  }
}
