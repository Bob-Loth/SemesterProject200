#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
  //initialize
  Complex InputComp;
  Complex Comp2(5, 3);
  Complex Comp3(4, 6);
  
  cout << "Please enter the real part and imaginary part of an ";
  cout << "imaginary number, separated by a space.";
  cin >> InputComp;
  cout << endl;
  //TestComp.PrintComplexNumber(); old format, new overloaded operators support format below
  //cout << endl;
  
  //print all
  cout << "You entered " << InputComp << endl;
  cout << "Test value 2 is " << Comp2 << endl;
  cout << "Test value 3 is " << Comp3 << endl;

  //test operator+
  Complex TestComp1 = InputComp + Comp3;
  cout << "Your value plus value 3 is " << TestComp1 << endl;

  //test operator-
  Complex TestComp2 = Comp2 - InputComp; 
  cout << "value 2 minus your value is " << TestComp2 << endl;

  //test operator*
  Complex TestComp3 = Comp2 * Comp3;
  cout << "value 2 multiplied by value 3 is " << TestComp3 << endl;

  //test operator==
  Complex TestCompEq2(5, 3);
  cout << "Equivalency Test Expected value: " << true << endl;
  cout << "Equivalency Test for Comp2 == Comp2: " << (Comp2 == TestCompEq2) << endl;

  //test operator!=
  cout << "Non-Equivalency Test Expected value: " << false << endl;
  cout << "Non-Equivalency Test for Comp3 != Comp3: " << (Comp3 != Comp3) << endl;
  system("pause");
	return 0;
}