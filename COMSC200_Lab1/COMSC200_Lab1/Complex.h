#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream> //cout 
#include <string>   //string literals in PrintComplexNumber

class Complex
{
public:
	Complex();
	Complex(double real, double imaginary);
  Complex operator+ (Complex c2) const; //performs c1 + c2
  Complex operator- (Complex c2) const; //performs c1 - c2
  Complex operator* (Complex c2) const; //performs c1 * c2
  bool operator== (Complex c2) const;//evaluates c1 == c2, mutually exclusive with !=
  bool operator!= (Complex c2) const;//evaluates c1 != c2, if c1 == c2, then false
private:
  friend std::ostream& operator<<(std::ostream&, const Complex&);
  friend std::istream& operator>>(std::istream&, Complex&);
	double realPart;
	double imaginaryPart;
};

#endif
