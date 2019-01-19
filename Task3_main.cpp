/**
* @file Task3_main.cpp
*
* @brief This code implements unary operator overloading
* It also implements type-conversion operator overloading.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// LOCAL INCLUDES
#include "RationalNumber.h"



// function main begins program execution
void main() {

	RationalNumber r1(4, 9), r2(2, 3), r3;

	cin >> r1 >> r2 >> r3;
	cout << "First Rational Number: " << r1 << endl;
	cout << "Second Rational Number: " << r2 << endl;
	cout << "Third Rational Number: " << r3 << endl << endl;


	cout << "Unary - (minus) r1: " << -r1 << endl;
	cout << "Unary - (minus) r2: " << -r2 << endl;
	cout << "Unary - (minus) r3: " << -r3 << endl << endl;

	cout << "Pre-increment r1: " << ++r1 << endl;
	cout << "Pre-increment r2: " << ++r2 << endl;
	cout << "Pre-increment r3: " << ++r3 << endl << endl;

	cout << "Post-increment r1: " << r1++ << endl;
	cout << "Post-increment r2: " << r2++ << endl;
	cout << "Post-increment r3: " << r3++ << endl << endl;

	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl << endl;

	cout << "Pre-decrement r1: " << --r1 << endl;
	cout << "Pre-decrement r2: " << --r2 << endl;
	cout << "Pre-decrement r3: " << --r3 << endl << endl;

	cout << "Post-decrement r1: " << r1-- << endl;
	cout << "Post-decrement r2: " << r2-- << endl;
	cout << "Post-decrement r3: " << r3-- << endl << endl;

	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl << endl;

	float f1 = 3.1429, f2 = 0.5, f3 = 1.5;

	r1 = f1;
	r2 = (RationalNumber)f2;
	r3 = RationalNumber(f3);

	cout << "Float to Rational: " << r1 << endl;
	cout << "Float to Rational: " << r2 << endl;
	cout << "Float to Rational: " << r3 << endl << endl;

	cout << "Rational to Float: " << (float)r1 << endl;
	cout << "Rational to Float: " << (float)r2 << endl;
	cout << "Rational to Float: " << (float)(r3) << endl << endl;



	system("pause");
}
// end main
