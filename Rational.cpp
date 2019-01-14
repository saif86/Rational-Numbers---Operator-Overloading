#include<algorithm>
#include "Rational.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Rational Default + Overloaded Constructor
Rational::Rational(int aNumerator, int aDenominator) : mNumerator(aNumerator), mDenominator(aDenominator) {
	this->SetRational(aNumerator, aDenominator);
}
// end Rational constructor



//============================= OPERATIONS ===================================

// function that adds two Rational numbers.
const Rational& Rational::AddRational(const Rational& rRational) {
	this->SetNumerator((this->GetNumerator() * rRational.GetDenominator()) + (rRational.GetNumerator() * this->GetDenominator()));
	this->SetDenominator(this->GetDenominator() * rRational.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end function AddRational

// function that subtracts two Rational numbers.
const Rational& Rational::SubtractRational(const Rational& rRational) {
	this->SetNumerator((this->GetNumerator()*rRational.GetDenominator()) - (rRational.GetNumerator()*this->GetDenominator()));
	this->SetDenominator(this->GetDenominator()*rRational.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end function SubtractRational

// function that multiplies two Rational numbers.
const Rational& Rational::MultiplyRational(const Rational& rRational) {
	this->SetNumerator(this->GetNumerator()*rRational.GetNumerator());
	this->SetDenominator(this->GetDenominator()*rRational.GetDenominator());
	this->ReducedForm();
	return *this;
}
// end function MultiplyRational

// function that divides two Rational numbers.
const Rational& Rational::DivideRational(const Rational& rRational) {
	this->SetNumerator(this->GetNumerator()*rRational.GetDenominator());
	this->SetDenominator(this->GetDenominator()*rRational.GetNumerator());
	this->ReducedForm();
	return *this;
}
// end function DivideRational

// function that prints Rational number in fraction(a/b) form.
void Rational::PrintFraction() const {
	cout << this->GetNumerator() << " / " << this->GetDenominator();
}
// end function PrintFraction

// function that prints Rational number in floating-point(a.b) form.
void Rational::PrintFloat() const {
	cout << (float)this->GetNumerator() /  (float)this->GetDenominator();
}
// end function PrintFloat


//============================= ACESS      ===================================

// function that sets numerator of Rational Number
void Rational::SetNumerator(int aNumerator) {
	this->mNumerator = aNumerator;
}
// end function SetNumerator

// function that sets denominator of Rational Number
void Rational::SetDenominator(int aDenominator) {
	if (aDenominator == 0) {
		cout << "Error. Denominator cannot be zero. Setting it to 1.";
		this->mDenominator = 1;
	}
	else
		this->mDenominator = aDenominator;
}
// end function SetDenominator

// function that sets the Rational Number
void Rational::SetRational(int aNumerator, int aDenominator) {
	this->SetNumerator(aNumerator);
	this->SetDenominator(aDenominator);
}
// end function SetRational

// overloaded function that sets the Rational Number
void Rational::SetRational(const Rational& rRational) {
	this->SetRational(rRational.GetNumerator(), rRational.GetDenominator());
}
// end function SetRational

// function that gets numerator
int Rational::GetNumerator()const {
	return this->mNumerator;
}
// end function GetNumerator

// function that gets denominator
int Rational::GetDenominator()const {
	return this->mDenominator;
}
// end function GetDenominator

// function that gets Rational Number
const Rational& Rational::GetRational()const {
	return *this;
}
// end function GetRational


/////////////////////////////// PRIVATE    ///////////////////////////////////

// utility function that converts the rational into reduced form.
void Rational::ReducedForm() {
	int lDivisor = std::min(std::abs(this->GetNumerator()), std::abs(this->GetDenominator()));
	for (int d = lDivisor; d > 1; --d) {
		while ((this->GetNumerator()%d == 0) && (this->GetDenominator() %d == 0)) {
			this->SetNumerator(this->GetNumerator() / d);
			this->SetDenominator(this->GetDenominator() / d);
		}
	}
}
