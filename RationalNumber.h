#include<iostream>
using namespace std;

class RationalNumber {
	int numerator, denominator;
	void ReducedForm(RationalNumber &); //Helper function to convert a rational into reduced form 
public:
	RationalNumber(int = 0, int = 1);
	RationalNumber(float); //constructor to convert a float to rational

	friend ostream & operator << (ostream &, const RationalNumber &);
	friend istream & operator >> (istream &, RationalNumber &);

	RationalNumber & operator +=(const RationalNumber &);
	RationalNumber & operator +=(const int);
	RationalNumber & operator -=(const RationalNumber &);
	RationalNumber & operator -=(const int);
	RationalNumber & operator *=(const RationalNumber &);
	RationalNumber & operator *=(const int);
	RationalNumber & operator /=(const RationalNumber &);
	RationalNumber & operator /=(const int);

	bool operator == (const RationalNumber &);
	bool operator != (const RationalNumber &);
	bool operator < (const RationalNumber &);
	bool operator > (const RationalNumber &);
	bool operator <= (const RationalNumber &);
	bool operator >= (const RationalNumber &);

	RationalNumber & operator ++ (); //pre-increment 
	RationalNumber operator ++ (int); //post-increment 
	RationalNumber & operator -- (); //pre-decrement 
	RationalNumber operator -- (int); //post-decrement

	operator float(); //operator float overloaded to convert rational to float
};

