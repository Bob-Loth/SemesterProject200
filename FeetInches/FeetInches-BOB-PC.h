#pragma once
#include <stdexcept>
class FeetInches
{
public:
  FeetInches();
  FeetInches(int, int);
  void setFeet(int);
  void setInches(int);
  int getFeet() const;
  int getInches() const;
  void Simplify(); 
  FeetInches operator+(FeetInches &) const;
  FeetInches operator-(FeetInches &) const;
private:
  int feet;
  int inches;
};

