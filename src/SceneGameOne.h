#pragma once
#include "Scene.h"
#include <Adafruit_ILI9341.h>

class SceneGameOne : public Scene {
public:
  SceneGameOne(Adafruit_ILI9341& display);
  void setup() override;
  void loop() override;
private:
  Adafruit_ILI9341& tft;
};