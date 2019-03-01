#include <iostream>
#include "Car.h"
using namespace std;

int main() {
  Car newCar;
  Car secCar;
  
  secCar.SetSpeed(12);
  secCar.SetTank(30);
  newCar.Display();
  secCar.Display();
  newCar = newCar + secCar;
  newCar.Display();
  secCar.Display();
  system("pause");
  return 0;
}