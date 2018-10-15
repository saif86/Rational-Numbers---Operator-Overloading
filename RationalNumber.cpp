#include<algorithm>		// Library required to use the minimum (min) function
#include<cmath>
#include "RationalNumber.h"

RationalNumber::RationalNumber(int num, int den) :numerator(num), denominator(den) {
	if (denominator <= 0)
		denominator = 1;
	ReducedForm(*this);

}

RationalNumber::RationalNumber(float f) { 
	numerator = int(f * 10000.0); 
	denominator = 10000; 
	ReducedForm(*this); 
}

void RationalNumber::ReducedForm(RationalNumber &obj) {
	int Divisor = std::min(abs(obj.numerator), abs(obj.denominator));
	for (int d = Divisor; d > 1; d--) {
		while ((obj.numerator%d == 0) && (obj.denominator%d == 0)) {
			obj.numerator /= d;
			obj.denominator /= d;
		}
	}
}

RationalNumber & RationalNumber::operator +=(const RationalNumber & rhs) {
	numerator = (numerator*rhs.denominator) + (rhs.numerator*denominator);
	denominator = denominator*rhs.denominator;
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator +=(const int rhs) {
	numerator = numerator + (rhs*denominator);
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator -=(const RationalNumber & rhs) {
	numerator = (numerator*rhs.denominator) - (rhs.numerator*denominator);
	denominator = denominator*rhs.denominator;
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator -=(const int rhs) {
	numerator = numerator - (rhs*denominator);
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator *=(const RationalNumber & rhs) {
	numerator = numerator*rhs.numerator;
	denominator = denominator*rhs.denominator;
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator *=(const int rhs) {
	numerator = numerator*rhs;
	ReducedForm(*this);
	return *this;
}

RationalNumber & RationalNumber::operator /=(const RationalNumber & rhs) {
	numerator = numerator*rhs.denominator;
	denominator = denominator*rhs.numerator;
	ReducedForm(*this);
	return *this;
}
RationalNumber & RationalNumber::operator /=(const int rhs) {
	denominator = denominator*rhs;
	ReducedForm(*this);
	return *this;
}

bool RationalNumber::operator ==(const RationalNumber & r) {
	if (((float)numerator / (float)denominator) == ((float)r.numerator / (float)r.denominator))
		return true;
	else
		return false;
}

bool RationalNumber::operator !=(const RationalNumber & r) {
	if (((float)numerator / (float)denominator) != ((float)r.numerator / (float)r.denominator))
		return true;
	else
		return false;
}

bool RationalNumber::operator <(const RationalNumber & r) {
	if (((float)numerator / (float)denominator) < ((float)r.numerator / (float)r.denominator))
		return true;
	else
		return false;
}

bool RationalNumber::operator >(const RationalNumber & r) {
	if (((float)numerator / (float)denominator) > ((float)r.numerator / (float)r.denominator))
		return true;
	else
		return false;
}

bool RationalNumber::operator <=(const RationalNumber & r) {
	if ((*this<r) || (*this == r))
		return true;
	else
		return false;
}

bool RationalNumber::operator >=(const RationalNumber & r) {
	if ((*this>r) || (*this == r))
		return true;
	else
		return false;
}

//pre-increment 
RationalNumber & RationalNumber::operator++(){ 
	*this += 1; 
	return *this; 
} 

//post-increment 
RationalNumber RationalNumber::operator ++ (int){ 
	RationalNumber t = *this; 
	*this += 1; 
	return t; 
} 

//pre-decrement 
RationalNumber & RationalNumber::operator--(){ 
	*this -= 1; 
	return *this; 
} 

//post-decrement 
RationalNumber RationalNumber::operator -- (int){ 
	RationalNumber t = *this; 
	*this -= 1; 
	return t; 
}

RationalNumber::operator float() {
	return float(numerator) / float(denominator);
}