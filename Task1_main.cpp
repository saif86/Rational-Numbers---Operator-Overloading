/**
* @file Task1_main.cpp
*
* @brief This code implements rational numbers in C++.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// LOCAL INCLUDES
#include "Rational.h"



// function main begins program execution
void main() {

	Rational aRational(220, 18), bRational(1080, 66);
	cout << "First Rational Number:" << endl;
	cout << "Rational Form: ";
	aRational.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	aRational.PrintFloat();
	cout << endl << endl;


	cout << "Second Rational Number:" << endl;
	cout << "Rational Form: ";
	bRational.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	bRational.PrintFloat();
	cout << endl << endl;


	Rational rAddition = aRational.AddRational(bRational);
	cout << "Addition:" << endl;
	cout << "Rational Form: ";
	rAddition.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	rAddition.PrintFloat();
	cout << endl << endl;

	aRational.SetRational(220, 18), bRational.SetRational(1080, 66);
	Rational rSubtraction = aRational.SubtractRational(bRational);
	cout << "Subtraction:" << endl;
	cout << "Rational Form: ";
	rSubtraction.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	rSubtraction.PrintFloat();
	cout << endl << endl;

	aRational.SetRational(220, 18), bRational.SetRational(1080, 66);
	Rational rMultiplication = aRational.MultiplyRational(bRational);
	cout << "Multiplication:" << endl;
	cout << "Rational Form: ";
	rMultiplication.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	rMultiplication.PrintFloat();
	cout << endl << endl;


	aRational.SetRational(220, 18), bRational.SetRational(1080, 66);
	Rational rDivision = aRational.DivideRational(bRational);
	cout << "Division:" << endl;
	cout << "Rational Form: ";
	rDivision.PrintFraction();
	cout << endl;
	cout << "Floating-point Form: ";
	rDivision.PrintFloat();
	cout << endl << endl;



	system("pause");
}
// end main
