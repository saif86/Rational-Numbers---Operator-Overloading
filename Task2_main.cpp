/**
* @file Task2_main.cpp
*
* @brief This code implements operator oveloading
* concepts in C++ using RationaNumber class.
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


	cout << "Addition: " << r1 + r2 + r3 << endl;
	cout << "Subtraction: " << r1 - r2 - r3 << endl;
	cout << "Multiplication: " << r1 * r2 * r3 << endl;
	cout << "Division: " << r1 / r2 / r3 << endl << endl;

	if (r1 == r2)
		cout << "r1 is equal to r2" << endl;
	if (r1 != r2)
		cout << "r1 is not equal to r2" << endl;
	if (r1 < r2)
		cout << "r1 is less than r2" << endl;
	if (r1 <= r2)
		cout << "r1 is less than or equal to r2" << endl;
	if (r1 > r2)
		cout << "r1 is greater than r2" << endl;
	if (r1 >= r2)
		cout << "r1 is greater than or equal to r2" << endl;



	system("pause");
}
// end main
