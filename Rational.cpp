#include<iostream>
#include<algorithm>
#include "Rational.h"

using std::cout;

Rational::Rational(int num, int den) :numerator(num), denominator(den) {
	if (denominator == 0)
		denominator = 1;
	ReducedForm(*this);

}

void Rational::PrintRational() const {
	cout << numerator << " / " << denominator;
}

void Rational::PrintRationalFloat() {
	cout << float(numerator) / float(denominator);
}

void Rational::ReducedForm(Rational &obj) {
	int Divisor = std::min(obj.numerator, obj.denominator);
	for (int d = Divisor; d > 1; d--) {
		while ((obj.numerator%d == 0) && (obj.denominator%d == 0)) {
			obj.numerator /= d;
			obj.denominator /= d;
		}
	}

}


Rational Rational::Add(const Rational & rhs) {
	Rational t;
	t.numerator = (numerator*rhs.denominator) + (rhs.numerator*denominator);
	t.denominator = denominator*rhs.denominator;
	ReducedForm(t);
	return t;
}

Rational Rational::Subtract(const Rational & rhs) {
	Rational t;
	t.numerator = (numerator*rhs.denominator) - (rhs.numerator*denominator);
	t.denominator = denominator*rhs.denominator;
	ReducedForm(t);
	return t;
}

Rational Rational::Multiply(const Rational & rhs) {
	Rational t;
	t.numerator = numerator*rhs.numerator;
	t.denominator = denominator*rhs.denominator;
	ReducedForm(t);
	return t;
}

Rational Rational::Divide(const Rational & rhs) {
	Rational t;
	t.numerator = numerator*rhs.denominator;
	t.denominator = denominator*rhs.numerator;
	ReducedForm(t);
	return t;
}