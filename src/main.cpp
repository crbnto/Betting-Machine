#include <Arduino.h>
#include <Servo.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ILI9341.h> // Hardware-specific library
#include "buttons.h"
#include "SceneStart.h"
#include "SceneGameOne.h"

#define TFT_CS 5
#define TFT_DC 6

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

SceneStart sceneStart(tft);
SceneGameOne sceneGameOne(tft);

const int LED1 {10};
const int FD1 {A3};

const int luz = 200;
int check = 0;

int carteira = 390;

Scene* currentScene = nullptr;

void setup()
{
  Serial.begin(9600);
  /*pinMode(LED1, OUTPUT);
  pinMode(FD1, INPUT);
  digitalWrite(LED1, HIGH);*/

  setupButtons();

  tft.begin();
  tft.setRotation(1);
  
  currentScene = &sceneStart;
  currentScene->setup();

}

void loop()
{
  /*int pd1Value = analogRead(FD1);
  Serial.println(pd1Value);
  delay(200);
  if (pd1Value < luz)
  {
    carteira += 100;
    delay(2000);
    check += 1;
  }*/
  currentScene->loop();
}