#include "FeetInches.h"
#include <cassert>
#include <iostream>

using namespace std;

int main() {
  //test constructors
  FeetInches a(5, 17);
  assert(a.getFeet() == 5 && a.getInches() == 17);
  FeetInches b;
  assert(b.getFeet() == 0 && b.getInches() == 0);

  //test Simplify
  a.Simplify();
  assert(a.getFeet() == 6 && a.getInches() == 5); //positive adjustment
  b.Simplify();
  assert(b.getFeet() == 0 && b.getInches() == 0); //no adjustment needed
  FeetInches c(4, -22);
  c.Simplify();
  assert(c.getFeet() == 2 && c.getInches() == 2); //negative adjustment

  //test operators + and -
  FeetInches d = a + c;
  assert(d.getFeet() == 8 && d.getInches() == 7);
  d = a - c;
  assert(d.getFeet() == 4 && d.getInches() == 3);

  //test operators <=, >= and !=
  assert(d <= a);
  assert(a <= a);
  assert(a >= c);
  assert(b >= b);
  assert(!(b != b));
  assert(c != d);
  cout << "All automated function testing passed." << endl;
  //test operators >> and <<, and cascading operators
  FeetInches e,f;
  cout << "Please enter a positive integer for feet, followed by an integer for inches. " << endl;
  cout << "Then, do the same thing again: feet, then inches. (total 4 inputs): ";
    cin >> e >> f;
  cin.ignore();
  cout << e << endl;
  e.Simplify();
  cout << "Otherwise known as " << e << endl;
  cout << f << endl;
  f.Simplify();
  cout << "Otherwise known as " << f << endl;
  system("pause");
  return 0;
}