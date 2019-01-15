#include<algorithm>
#include "RationalNumber.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// RationalNumber Default + Overloaded Constructor
RationalNumber::RationalNumber(int aNumerator, int aDenominator) : mNumerator(aNumerator), mDenominator(aDenominator) {
	this->SetRationalNumber(aNumerator, aDenominator);
}
// end RationalNumber constructor



//============================= OPERATORS ====================================

// Stream Insertion
ostream& operator <<(ostream& rOs, const RationalNumber& rFrom) {
	if (rFrom.GetDenominator() == 1)
		rOs << rFrom.GetNumerator();
	else
		rOs << rFrom.GetNumerator() << " / " << rFrom.GetDenominator();

	return rOs;
}
// end stream insertion

// Stream Extraction
istream& operator >>(istream& rIs, RationalNumber& rTo) {
	cout << "Enter value for numerator: ";
	rIs >> rTo.mNumerator;
	cout << "Enter value for denominator: ";
	rIs >> rTo.mDenominator;
	rTo.ReducedForm();
	return rIs;
}
// end stream extraction

// Addition operator
RationalNumber RationalNumber::operator +(const RationalNumber& rhs) {
	RationalNumber t = *this;
	return t += rhs;
}
// end Addition operator

// Overloaded addition operator
RationalNumber RationalNumber::operator +(const int rhs) {
	RationalNumber t = *this;
	return t += rhs;
}
// end Addition operator

// Friend function to overloaded addition operator
RationalNumber operator +(const int lhs, const RationalNumber& rhs) {
	RationalNumber t = rhs;
	return t += lhs;
}
// end Addition operator

// Addition assignment operator
RationalNumber& RationalNumber::operator +=(const RationalNumber& rhs) {
	this->SetNumerator((this->GetNumerator() * rhs.GetDenominator()) + (rhs.GetNumerator() * this->GetDenominator()));
	this->SetDenominator(this->GetDenominator() * rhs.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end addition assignment operator 

// Overloaded Addition assignment operator
RationalNumber & RationalNumber::operator +=(const int rhs) {
	this->SetNumerator(this->GetNumerator() + (rhs * this->GetDenominator()));
	this->ReducedForm();
	return *this;
}
// end addition assignment operator 

// Subtraction operator
RationalNumber RationalNumber::operator -(const RationalNumber& rhs) {
	RationalNumber t = *this;
	return t -= rhs;
}
// end Subtraction operator

// Overloaded subtraction operator
RationalNumber RationalNumber::operator -(const int rhs) {
	RationalNumber t = *this;
	return t -= rhs;
}
// end subtraction operator

// Friend function to overloaded subtraction operator
RationalNumber operator -(const int lhs, const RationalNumber& rhs) {
	RationalNumber t = rhs;
	return t -= lhs;
}
// end subtraction operator

// Subtraction assignment operator
RationalNumber& RationalNumber::operator -=(const RationalNumber& rhs) {
	this->SetNumerator((this->GetNumerator() * rhs.GetDenominator()) - (rhs.GetNumerator() * this->GetDenominator()));
	this->SetDenominator(this->GetDenominator() * rhs.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end subtraction assignment operator 

// Overloaded subtraction assignment operator
RationalNumber & RationalNumber::operator -=(const int rhs) {
	this->SetNumerator(this->GetNumerator() - (rhs * this->GetDenominator()));
	this->ReducedForm();
	return *this;
}
// end subtraction assignment operator

// Multiplication operator
RationalNumber RationalNumber::operator *(const RationalNumber& rhs) {
	RationalNumber t = *this;
	return t *= rhs;
}
// end multiplication operator

// Overloaded multiplication operator
RationalNumber RationalNumber::operator *(const int rhs) {
	RationalNumber t = *this;
	return t *= rhs;
}
// end multiplication operator

// Friend function to overloaded multiplication operator
RationalNumber operator *(const int lhs, const RationalNumber& rhs) {
	RationalNumber t = rhs;
	return t *= lhs;
}
// end multiplication operator

// Multiplication assignment operator
RationalNumber& RationalNumber::operator *=(const RationalNumber& rhs) {
	this->SetNumerator(this->GetNumerator()*rhs.GetNumerator());
	this->SetDenominator(this->GetDenominator()*rhs.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end multiplication assignment operator 

// Overloaded multiplication assignment operator
RationalNumber & RationalNumber::operator *=(const int rhs) {
	this->SetNumerator(this->GetNumerator()*rhs);
	this->ReducedForm();
	return *this;
}
// end multiplication assignment operator

// Division operator
RationalNumber RationalNumber::operator /(const RationalNumber& rhs) {
	RationalNumber t = *this;
	return t /= rhs;
}
// end division operator

// Overloaded division operator
RationalNumber RationalNumber::operator /(const int rhs) {
	RationalNumber t = *this;
	return t /= rhs;
}
// end division operator

// Friend function to overloaded division operator
RationalNumber operator /(const int lhs, const RationalNumber& rhs) {
	RationalNumber t = rhs;
	return t /= lhs;
}
// end division operator

// Division assignment operator
RationalNumber& RationalNumber::operator /=(const RationalNumber& rhs) {
	this->SetNumerator(this->GetNumerator()*rhs.GetDenominator());
	this->SetDenominator(this->GetDenominator()*rhs.GetNumerator());
	this->ReducedForm();
	return *this;
}
// end division assignment operator 

// Overloaded division assignment operator
RationalNumber & RationalNumber::operator /=(const int rhs) {
	this->SetDenominator(this->GetDenominator()*rhs);
	this->ReducedForm();
	return *this;
}
// end division assignment operator

// Equality operator
bool RationalNumber::operator ==(const RationalNumber& rhs) {
	if (((float)this->GetNumerator() / (float)this->GetDenominator()) == ((float)rhs.GetNumerator() / (float)rhs.GetDenominator()))
		return true;
	else
		return false;
}
// end equality operator

// Non-Equality operator
bool RationalNumber::operator !=(const RationalNumber & rhs) {
	if (((float)this->GetNumerator() / (float)this->GetDenominator()) != ((float)rhs.GetNumerator() / (float)rhs.GetDenominator()))
		return true;
	else
		return false;
}
// end non-Equality operator

// Less than operator
bool RationalNumber::operator <(const RationalNumber & rhs) {
	if (((float)this->GetNumerator() / (float)this->GetDenominator()) < ((float)rhs.GetNumerator() / (float)rhs.GetDenominator()))
		return true;
	else
		return false;
}
// end less than operator

// Greater than operator
bool RationalNumber::operator >(const RationalNumber & rhs) {
	if (((float)this->GetNumerator() / (float)this->GetDenominator()) > ((float)rhs.GetNumerator() / (float)rhs.GetDenominator()))
		return true;
	else
		return false;
}
// end greater than operator

// Less than or equal to operator
bool RationalNumber::operator <=(const RationalNumber & rhs) {
	if ((*this<rhs) || (*this == rhs))
		return true;
	else
		return false;
}
// end less than or equal to operator.


// Greater than or equal to operator
bool RationalNumber::operator >=(const RationalNumber & rhs) {
	if ((*this>rhs) || (*this == rhs))
		return true;
	else
		return false;
}
// end greater than or equal to operator.


//============================= OPERATIONS ===================================

// function that prints Rational number in fraction(a/b) form.
void RationalNumber::PrintFraction() const {
	cout << this->GetNumerator() << " / " << this->GetDenominator();
}
// end function PrintFraction

// function that prints Rational number in floating-point(a.b) form.
void RationalNumber::PrintFloat() const {
	cout << (float)this->GetNumerator() / (float)this->GetDenominator();
}
// end function PrintFloat


//============================= ACESS      ===================================

// function that sets numerator of Rational Number
void RationalNumber::SetNumerator(int aNumerator) {
	this->mNumerator = aNumerator;
}
// end function SetNumerator

// function that sets denominator of Rational Number
void RationalNumber::SetDenominator(int aDenominator) {
	if (aDenominator == 0) {
		cout << "Error. Denominator cannot be zero. Setting it to 1.";
		this->mDenominator = 1;
	}
	else
		this->mDenominator = aDenominator;
}
// end function SetDenominator

// function that sets the RationalNumber
void RationalNumber::SetRationalNumber(int aNumerator, int aDenominator) {
	this->SetNumerator(aNumerator);
	this->SetDenominator(aDenominator);
}
// end function SetRationalNumber

// overloaded function that sets the RationalNumber
void RationalNumber::SetRationalNumber(const RationalNumber& rRationalNumber) {
	this->SetRationalNumber(rRationalNumber.GetNumerator(), rRationalNumber.GetDenominator());
}
// end function SetRationalNumber

// function that gets numerator
int RationalNumber::GetNumerator()const {
	return this->mNumerator;
}
// end function GetNumerator

// function that gets denominator
int RationalNumber::GetDenominator()const {
	return this->mDenominator;
}
// end function GetDenominator

// function that gets Rational Number
const RationalNumber& RationalNumber::GetRationalNumber()const {
	return *this;
}
// end function GetRationalNumber


/////////////////////////////// PRIVATE    ///////////////////////////////////

// utility function that converts the rational into reduced form.
void RationalNumber::ReducedForm() {
	int lDivisor = std::min(std::abs(this->GetNumerator()), std::abs(this->GetDenominator()));
	for (int d = lDivisor; d > 1; --d) {
		while ((this->GetNumerator() % d == 0) && (this->GetDenominator() % d == 0)) {
			this->SetNumerator(this->GetNumerator() / d);
			this->SetDenominator(this->GetDenominator() / d);
		}
	}
}
