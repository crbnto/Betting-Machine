#include <Arduino.h>
#include <Servo.h>

Servo myServo10;
Servo myServo20;
Servo myServo50;

void setupServos() {
  myServo50.attach(3);
  myServo20.attach(4);
  myServo10.attach(14);

  myServo50.write(90);
  myServo20.write(90);
  myServo10.write(90);
}

void pop50()
{
  myServo50.write(100);
  delay(1190);
  myServo50.write(90);
  delay(200);
  myServo50.write(80);
  delay(1000);
  myServo50.write(90);
}

void pop20()
{
  myServo20.write(100);
  delay(1110);
  myServo20.write(90);
  delay(200);
  myServo20.write(80);
  delay(900);
  myServo20.write(90);
}

void pop10()
{
  myServo10.write(100);
  delay(950);
  myServo10.write(90);
  delay(200);
  myServo10.write(80);
  delay(780);
  myServo10.write(90);
}

void cashout(int& carteira)
{
  while (carteira!=0)
  {
    if (carteira >= 50)
    {
      pop50();
      carteira -= 50;
      delay(500);
    }
    else if (carteira >= 20)
    {
      pop20();
      carteira -= 20;
      delay(500);
    }
    else if (carteira >= 10)
    {
      pop10();
      carteira -= 10;
      delay(500);
    }
  }
}