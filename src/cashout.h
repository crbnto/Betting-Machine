#pragma once

#include <Arduino.h>
#include <Servo.h>

extern Servo myServo10;
extern Servo myServo20;
extern Servo myServo50;

void setupServos();
void pop10();
void pop20();
void pop50();
void cashout(int& carteira);