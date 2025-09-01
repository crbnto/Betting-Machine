#include <Arduino.h>

const int buttonEsq = 2;
bool buttonEsqPressed = false;
const int buttonDir = 12;
bool buttonDirPressed = false;

void setupButtons()
{
  pinMode(buttonEsq, INPUT_PULLUP);
  pinMode(buttonDir, INPUT_PULLUP);
}

bool checkLeftButton()
{
  int buttonEsqState = digitalRead(buttonEsq);
  
  if (buttonEsqState == LOW) {
    if (!buttonEsqPressed) {
      buttonEsqPressed = true;
      return true;
    }
  } else {
    buttonEsqPressed = false;
  }
  return false;
}

bool checkRightButton()
{
  int buttonDirState = digitalRead(buttonDir);
  
  if (buttonDirState == LOW) {
    if (!buttonDirPressed) {
      buttonDirPressed = true;
      return true;
    }
  } else {
    buttonDirPressed = false;
  }
  return false;
}

bool leftPressedOnce()
{
    static bool last = HIGH;
    bool now = digitalRead(buttonEsq);   // LOW = pressed
    bool justPressed = (last == HIGH && now == LOW);
    last = now;
    return justPressed;
}

bool rightPressedOnce()
{
    static bool last = HIGH;
    bool now = digitalRead(buttonDir);
    bool justPressed = (last == HIGH && now == LOW);
    last = now;
    return justPressed;
}