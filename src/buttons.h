#pragma once

extern const int buttonEsq;
extern bool buttonEsqPressed;
extern const int buttonDir;
extern bool buttonDirPressed;

void setupButtons();
bool checkLeftButton();
bool checkRightButton();
bool leftPressedOnce();
bool rightPressedOnce();