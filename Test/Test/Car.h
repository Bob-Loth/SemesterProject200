#pragma once
#include <string>
#include <iostream>
using namespace std;


class Car
{
private:
  int tank;
  int speed;
public:
  void SetTank(int tank);
  void SetSpeed(int speed);
  int getTank() const { return tank; }
  int getSpeed() const { return speed; }
  Car operator+(const Car& secCar);
  void Display();
  Car();
  Car(int tank, int speed);
  ~Car();
};

