#include "Complex.h"

Complex::Complex() {
	realPart = 0.0;
	imaginaryPart = 0.0;
}

Complex::Complex(double real, double imaginary){
	realPart = real;
	imaginaryPart = imaginary;
}

Complex Complex::operator+(Complex c2) const{
  Complex temp;
  temp.realPart = this->realPart + c2.realPart;
  temp.imaginaryPart = this->imaginaryPart + c2.imaginaryPart;
  return temp;
}



Complex Complex::operator-(Complex c2) const{
  Complex temp;
  temp.realPart = this->realPart - c2.realPart;
  temp.imaginaryPart = this->imaginaryPart - c2.imaginaryPart;
  return temp;
}

Complex Complex::operator*(Complex c2) const{
  Complex temp;
  temp.realPart = (realPart * c2.realPart) - (imaginaryPart * c2.imaginaryPart);
  temp.imaginaryPart = (realPart * c2.imaginaryPart) + (imaginaryPart * c2.realPart);
  return temp;
}

bool Complex::operator==(Complex c2) const{
  if (realPart == c2.realPart && imaginaryPart == c2.imaginaryPart) return true;
  else return false;
}

bool Complex::operator!=(Complex c2) const{
  if (realPart != c2.realPart || imaginaryPart != c2.imaginaryPart) return true;
  else return false;
}

std::ostream & operator<<(std::ostream &output, const Complex& temp){
  output << "(" << temp.realPart << ", " << temp.imaginaryPart << ")";
  return output;
}

std::istream & operator>>(std::istream &input, Complex &temp){
  input >> temp.realPart >> temp.imaginaryPart;
  return input;
}
