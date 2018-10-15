#include "RationalNumber.h"

RationalNumber operator +(const RationalNumber &, const RationalNumber &);
RationalNumber operator +(const int, const RationalNumber &);
RationalNumber operator +(const RationalNumber &, const int);
RationalNumber operator -(const RationalNumber &, const RationalNumber &);
RationalNumber operator -(const int, const RationalNumber &);
RationalNumber operator -(const RationalNumber &, const int);
RationalNumber operator *(const RationalNumber &, const RationalNumber &);
RationalNumber operator *(const int, const RationalNumber &);
RationalNumber operator *(const RationalNumber &, const int);
RationalNumber operator /(const RationalNumber &, const RationalNumber &);
RationalNumber operator /(const int, const RationalNumber &);
RationalNumber operator /(const RationalNumber &, const int);

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

ostream & operator << (ostream & os, const RationalNumber & r) {
	if (r.denominator == 1)
		os << r.numerator;
	else
		os << r.numerator << " / " << r.denominator;

	return os;
}

istream & operator >> (istream & in, RationalNumber & r) {
	cout << "Enter value for numerator: ";
	in >> r.numerator;
	cout << "Enter value for denominator: ";
	in >> r.denominator;
	r.ReducedForm(r);
	return in;
}

RationalNumber operator +(const RationalNumber & lhs, const RationalNumber & rhs) {
	RationalNumber t = lhs;
	return t += rhs;
}

RationalNumber operator +(const int a, const RationalNumber & rhs) {
	RationalNumber t = rhs;
	return t += a;
}

RationalNumber operator +(const RationalNumber & lhs, const int a) {
	RationalNumber t = lhs;
	return t += a;
}

RationalNumber operator -(const RationalNumber & lhs, const RationalNumber & rhs) {
	RationalNumber t = lhs;
	return t -= rhs;
}

RationalNumber operator -(const int a, const RationalNumber & rhs) {
	RationalNumber t(a);
	return t -= rhs;
}

RationalNumber operator -(const RationalNumber & lhs, const int a) {
	RationalNumber t = lhs;
	return t -= a;
}

RationalNumber operator *(const RationalNumber & lhs, const RationalNumber & rhs) {
	RationalNumber t = lhs;
	return t *= rhs;
}

RationalNumber operator *(const int a, const RationalNumber & rhs) {
	RationalNumber t(a);
	return t *= rhs;
}

RationalNumber operator *(const RationalNumber & lhs, const int a) {
	RationalNumber t = lhs;
	return t *= a;
}

RationalNumber operator /(const RationalNumber & lhs, const RationalNumber & rhs) {
	RationalNumber t = lhs;
	return t /= rhs;
}

RationalNumber operator /(const int a, const RationalNumber & rhs) {
	RationalNumber t(a);
	return t /= rhs;
}

RationalNumber operator /(const RationalNumber & lhs, const int a) {
	RationalNumber t = lhs;
	return t /= a;
}