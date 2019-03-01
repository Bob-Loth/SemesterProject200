#include "Car.h"



void Car::SetTank(int tank)
{
  this->tank = tank;
}

void Car::SetSpeed(int speed)
{
  this->speed = speed;
}

Car Car::operator+(const Car& secCar)
{
  Car carSum(tank + secCar.tank, speed + secCar.speed);
  return carSum;
}

void Car::Display()
{
  cout << "This car's tank: " << tank << endl;
  cout << "This car's speed: " << speed << endl;
}

Car::Car()
{
  this->tank = 45;
  this->speed = 9;
}
Car::Car(int tank, int speed) {
  this->tank = tank;
  this->speed = speed;
}


Car::~Car()
{
}
