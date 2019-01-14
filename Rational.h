/**  Rational class to handle rational numbers in a C++ code.
*
* #include "Rational.h" <BR>
* -llib
*
*/
#ifndef RATIONAL_H
#define RATIONAL_H

// SYSTEM INCLUDES
#include<iostream>


// Rational class definition
class Rational {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Rational(int = 0, int = 1);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Rational(const Rational&);
	// Rational& operator=(const Rational&);
	// ~Rational();

	
// OPERATIONS
	/** Adds two Rational numbers.
	* The result is returned in reduced form.
	*
	* @param rRational Reference to Rational to be added.
	*
	* @return Reference to Rational of resultant.
	*/
	const Rational& AddRational(const Rational& rRational);

	/** Subtracts two Rational numbers.
	* The result is returned in reduced form.
	*
	* @param rRational Reference to Rational to be subtracted.
	*
	* @return Reference to Rational of resultant.
	*/
	const Rational& SubtractRational(const Rational& rRational);

	/** Multiplies two Rational numbers.
	* The result is returned in reduced form.
	*
	* @param rRational Reference to Rational to be multiplied.
	*
	* @return Reference to Rational of resultant.
	*/
	const Rational& MultiplyRational(const Rational& rRational);

	/** Divides two Rational numbers.
	* The result is returned in reduced form.
	*
	* @param rRational Reference to Rational to be divided.
	*
	* @return Reference to Rational of resultant.
	*/
	const Rational& DivideRational(const Rational& rRational);

	/** Prints Rational number in fraction(a/b) form.
	*
	* @param void.
	*
	* @return void.
	*/
	void PrintFraction()const;

	/** Prints Rational number in floating-point(a.b) form.
	*
	* @param void.
	*
	* @return void.
	*/
	void PrintFloat()const;

// ACCESS
	// setters
	void SetNumerator(int = 0);
	void SetDenominator(int = 1);
	void SetRational(int = 0, int = 1);
	/**
	# @overload void SetRational(const Rational&);
	*/
	void SetRational(const Rational&);
	
	// getters
	int GetNumerator()const;
	int GetDenominator()const;
	const Rational& GetRational()const;
	
private:

	/** utility function that converts the rational into reduced form.
	*
	* @param void.
	*
	* @return void.
	*/
	void ReducedForm();

	
// DATA MEMBERS
	int mNumerator;
	int mDenominator;
};
// end class Rational
#endif  
// _RATIONAL_H_
