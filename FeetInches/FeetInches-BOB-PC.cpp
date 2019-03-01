#include "FeetInches.h"

FeetInches::FeetInches() {
  feet = 0;
  inches = 0;
}

FeetInches::FeetInches(int feet, int inches){
  this->feet = feet;
  this->inches = inches;
}

void FeetInches::setFeet(int feet) {
  this->feet = feet;
}

void FeetInches::setInches(int) {
  this->inches = inches;
}

int FeetInches::getFeet() const {
  return feet;
}

int FeetInches::getInches() const {
  return inches;
}
void FeetInches::Simplify() {
  
  if (inches >= 12) {
    feet += (inches / 12);
    inches = inches % 12;
  }
  else if (inches < 0) {
    while (inches < 0) {
      inches += 12;
      feet -= 1;
    }
  }
  if (feet < 0)
    throw std::invalid_argument("Distance cannot be negative");
}

FeetInches FeetInches::operator+(FeetInches &) const
{
  return FeetInches();
}

FeetInches FeetInches::operator-(FeetInches &) const
{
  return FeetInches();
}
