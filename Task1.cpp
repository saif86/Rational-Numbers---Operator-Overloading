#include<iostream>
#include "Rational.h"

using std::cout;
using std::endl;
using std::cin;

void main() {
	Rational aRational(220, 18), bRational(1080, 66);
	cout << "First Rational Number:" << endl;
	cout << "Rational Form: ";
	aRational.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	aRational.PrintRationalFloat();
	cout << endl << endl;


	cout << "Second Rational Number:" << endl;
	cout << "Rational Form: ";
	bRational.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	bRational.PrintRationalFloat();
	cout << endl << endl;

	Rational rAddition = aRational.Add(bRational);
	cout << "Addition:" << endl;
	cout << "Rational Form: ";
	rAddition.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	rAddition.PrintRationalFloat();
	cout << endl << endl;

	Rational rSubtraction = aRational.Subtract(bRational);
	cout << "Subtraction:" << endl;
	cout << "Rational Form: ";
	rSubtraction.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	rSubtraction.PrintRationalFloat();
	cout << endl << endl;

	Rational rMultiplication = aRational.Multiply(bRational);
	cout << "Multiplication:" << endl;
	cout << "Rational Form: ";
	rMultiplication.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	rMultiplication.PrintRationalFloat();
	cout << endl << endl;


	Rational rDivision = aRational.Divide(bRational);
	cout << "Division:" << endl;
	cout << "Rational Form: ";
	rDivision.PrintRational();
	cout << endl;
	cout << "Floating-point Form: ";
	rDivision.PrintRationalFloat();
	cout << endl << endl;

	system("pause");

}