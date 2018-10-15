#include<iostream>
using namespace std;

class RationalNumber {
	int numerator, denominator;
	void ReducedForm(RationalNumber &); //Helper function to convert a rational into reduced form 
public:
	RationalNumber(int = 0, int = 1);

	RationalNumber & operator +=(const RationalNumber &);
	RationalNumber & operator +=(const int);
	RationalNumber & operator -=(const RationalNumber &);
	RationalNumber & operator -=(const int);
	RationalNumber & operator *=(const RationalNumber &);
	RationalNumber & operator *=(const int);
	RationalNumber & operator /=(const RationalNumber &);
	RationalNumber & operator /=(const int);

	friend ostream & operator << (ostream &, const RationalNumber &);
	friend istream & operator >> (istream &, RationalNumber &);

	bool operator == (const RationalNumber &);
	bool operator != (const RationalNumber &);
	bool operator < (const RationalNumber &);
	bool operator > (const RationalNumber &);
	bool operator <= (const RationalNumber &);
	bool operator >= (const RationalNumber &);
};

