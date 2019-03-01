#include "FeetInches.h"

FeetInches::FeetInches(int feet, int inches) {
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

FeetInches FeetInches::operator+(FeetInches & arg2) const {
  FeetInches temp;
  temp.feet = feet + arg2.feet;
  temp.inches = inches + arg2.inches;
  return temp;
}

FeetInches FeetInches::operator-(FeetInches & arg2) const {
  FeetInches temp;
  temp.feet = feet - arg2.feet;
  temp.inches = inches - arg2.inches;
  return temp;
}

bool FeetInches::operator>=(FeetInches & arg2) const {
  if (((feet * 12) + inches) >= (arg2.feet * 12) + arg2.inches) {
    return true;
  }
  else return false;
}

bool FeetInches::operator<=(FeetInches & arg2) const {
  if (((feet * 12) + inches) <= (arg2.feet * 12) + arg2.inches){
    return true;
}
  else return false;
}

bool FeetInches::operator!=(FeetInches & arg2) const
{
  if (((feet * 12) + inches) != ((arg2.feet * 12) + arg2.inches))
    return true;
  else return false;
}

std::ostream & operator<<(std::ostream & output, const FeetInches & ftIn)
{ 
  output << ftIn.getFeet() << " ft, " << ftIn.getInches() << " in";
  return output;
}

std::istream & operator>>(std::istream & input, FeetInches & ftIn){
  input >> ftIn.feet >> ftIn.inches;
  return input;
}
