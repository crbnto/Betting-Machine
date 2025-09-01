#pragma once
#include "Scene.h"
#include <Adafruit_ILI9341.h>

class SceneStart : public Scene {
public:
  SceneStart(Adafruit_ILI9341& display);
  void setup() override;
  void loop() override;
private:
  Adafruit_ILI9341& tft;
};