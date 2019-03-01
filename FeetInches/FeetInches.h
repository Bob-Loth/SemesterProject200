#pragma once
#include <stdexcept>
#include <iostream>
class FeetInches
{
public:
  
  FeetInches(int=0, int=0);
  void setFeet(int);
  void setInches(int);
  int getFeet() const;
  int getInches() const;
  void Simplify(); 
  FeetInches operator+(FeetInches &) const;
  FeetInches operator-(FeetInches &) const;
  bool operator>=(FeetInches &) const;
  bool operator<=(FeetInches &) const;
  bool operator!=(FeetInches &) const;
private:
  int feet;
  int inches;

  friend std::ostream & operator<<(std::ostream &, const FeetInches &);
  friend std::istream & operator>>(std::istream &, FeetInches &);
};

