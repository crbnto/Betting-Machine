#include <Adafruit_ILI9341.h>
#include "SceneManager.h"

extern Adafruit_ILI9341 tft;  // if needed for setup in scene

void switchToScene(Scene* newScene) {
  currentScene = newScene;
  currentScene->setup();
}