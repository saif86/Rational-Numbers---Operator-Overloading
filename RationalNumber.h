/**  RationalNumber class to handle rational numbers in a C++ code.
*
* #include "RationalNumber.h" <BR>
* -llib
*
*/
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

// SYSTEM INCLUDES
#include<iostream>


// RationalNumber class definition
class RationalNumber {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	RationalNumber(int = 0, int = 1);

	/** Float Conversion constructor.
	*/
	RationalNumber(float);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// RationalNumber(const RationalNumber&);
	// RationalNumber& operator=(const RationalNumber&);
	// ~RationalNumber();
	
	
// OPERATORS
	/** Stream Insertion operator.
	*
	* @param rOs Standard Output Stream.
	* @param rFrom The value to be inserted to the output stream.
	*
	* @return A reference to the standard output stream.
	*/
	friend std::ostream& operator <<(std::ostream& rOs, const RationalNumber& rFrom);

	/** Stream Extraction operator.
	*
	* @param rIs Standard Intput Stream.
	* @param rTo The value to be extracted from the input stream.
	*
	* @return A reference to the standard input stream.
	*/
	friend std::istream& operator >>(std::istream& rIs, RationalNumber& rTo);

	// ADDITION
	/** Addition operator.
	*
	* @param rhs A reference to rhs addend.
	*
	* @return Sum of two Rational Numbers.
	*/
	RationalNumber operator +(const RationalNumber& rhs);

	/** Overloaded Addition operator.
	*
	* @param rhs Integer addend.
	*
	* @return Sum of Rational and integer.
	*/
	RationalNumber operator +(const int rhs);

	/** Friend function to overloaded Addition operator.
	*
	* @param lhs Integer augend.
	* @param rhs A reference to rhs addend.
	*
	* @return Sum of integer and rational.
	*/
	friend RationalNumber operator +(const int lhs, const RationalNumber& rhs);

	/** Addition assignment operator.
	*
	* @param rhs A reference to rhs addend.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator +=(const RationalNumber& rhs);
	
	/** Overloaded Addition assignment operator.
	*
	* @param rhs Integer addend.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator +=(const int rhs);

	// SUBTRACTION
	/** Subtraction operator.
	*
	* @param rhs A reference to rhs subtrahend.
	*
	* @return Difference of two Rational Numbers.
	*/
	RationalNumber operator -(const RationalNumber& rhs);

	/** Overloaded Subtraction operator.
	*
	* @param rhs Integer subtrahend.
	*
	* @return Difference of integer from Rational.
	*/
	RationalNumber operator -(const int rhs);

	/** Friend function to overloaded Subtraction operator.
	*
	* @param lhs Integer minuend.
	* @param rhs A reference to rhs subtrahend.
	*
	* @return Difference of Rational from integer.
	*/
	friend RationalNumber operator -(const int lhs, const RationalNumber& rhs);

	/** Subtraction assignment operator.
	*
	* @param rhs A reference to rhs subtrahend.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator -=(const RationalNumber& rhs);

	/** Overloaded Subtraction assignment operator.
	*
	* @param rhs Integer subtrahend.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator -=(const int rhs);


	// MULTIPLICATION
	/** Multiplication operator.
	*
	* @param rhs A reference to rhs multiplier/factor.
	*
	* @return Product of two Rational Numbers.
	*/
	RationalNumber operator *(const RationalNumber& rhs);

	/** Overloaded Multiplication operator.
	*
	* @param rhs Integer multiplier/factor.
	*
	* @return Product Rational and Integer.
	*/
	RationalNumber operator *(const int rhs);

	/** Friend function to overloaded Multiplication operator.
	*
	* @param lhs Integer multiplicand/factor.
	* @param rhs A reference to rhs multiplier/factor.
	*
	* @return Product Integer and Rational.
	*/
	friend RationalNumber operator *(const int lhs, const RationalNumber& rhs);

	/** Multiplication assignment operator.
	*
	* @param rhs A reference to rhs multiplier/factor.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator *=(const RationalNumber& rhs);

	/** Overloaded Multiplication assignment operator.
	*
	* @param rhs Integer multiplier/factor.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator *=(const int rhs);


	// DIVISION
	/** Division operator.
	*
	* @param rhs A reference to rhs divisor.
	*
	* @return Division of two Rational Numbers.
	*/
	RationalNumber operator /(const RationalNumber& rhs);

	/** Overloaded Division operator.
	*
	* @param rhs Integer divisor.
	*
	* @return Division of Rational by Integer.
	*/
	RationalNumber operator /(const int rhs);

	/** Friend function to overloaded Division operator.
	*
	* @param lhs Integer dividend.
	* @param rhs A reference to rhs divisor.
	*
	* @return Division of Integer by Rational.
	*/
	friend RationalNumber operator /(const int lhs, const RationalNumber& rhs);

	/** Division assignment operator.
	*
	* @param rhs A reference to rhs divisor.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator /=(const RationalNumber& rhs);

	/** Overloaded Division assignment operator.
	*
	* @param rhs Integer divisor.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator /=(const int rhs);


	// EQUALITY
	/** Equality operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if equal, false otherwise.
	*/
	bool operator == (const RationalNumber& rhs);

	/** Non-Equality operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if not equal, false otherwise.
	*/
	bool operator != (const RationalNumber& rhs);

	/** Less than operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if less than rhs, false otherwise.
	*/
	bool operator < (const RationalNumber& rhs);

	/** Greater than operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if greater than rhs, false otherwise.
	*/
	bool operator > (const RationalNumber& rhs);

	/** Less than or equal to operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if less than or equal to rhs, false otherwise.
	*/
	bool operator <= (const RationalNumber& rhs);

	/** Greater than or equal to operator.
	*
	* @param rhs A reference to rhs Rational.
	*
	* @return True if greater than or equal to rhs, false otherwise.
	*/
	bool operator >= (const RationalNumber& rhs);

	// UNARY OPERATORS
	/** Negation operator.
	*
	* @param void.
	*
	* @return Negative of Rational Number.
	*/
	RationalNumber operator -();

	// INCREMENT OPERATOR
	/** pre-increment operator.
	*
	* @param void.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator ++();

	/** post-increment operator.
	*
	* @param dummy integer to overload increment operator.
	*
	* @return Incremented Rational Number.
	*/
	RationalNumber operator ++(int);

	// DECREMENT OPERATOR
	/** pre-decrement operator.
	*
	* @param void.
	*
	* @return reference to (updated) current object.
	*/
	RationalNumber& operator --();

	/** post-decrement operator.
	*
	* @param dummy integer to overload decrement operator.
	*
	* @return Decremented Rational Number.
	*/
	RationalNumber operator --(int);

	/** Function operator to overload float
	* This converts rational number to float
	*
	* @param void.
	*
	* @return converted float equivalent.
	*/
	operator float();


// OPERATIONS
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
	void SetRationalNumber(int = 0, int = 1);
	/**
	# @overload void SetRationalNumber(const RationalNumber&);
	*/
	void SetRationalNumber(const RationalNumber&);

	// getters
	int GetNumerator()const;
	int GetDenominator()const;
	const RationalNumber& GetRationalNumber()const;

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
// end class RationalNumber
#endif  
// _RATIONAL_NUMBER_H_
