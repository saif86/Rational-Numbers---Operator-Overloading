class Rational {
	int numerator, denominator;
	void ReducedForm(Rational &);		//Helper function to convert a rational into reduced form
public:
	Rational(int = 0, int = 1);

	Rational Add(const Rational &);
	Rational Subtract(const Rational &);
	Rational Multiply(const Rational &);
	Rational Divide(const Rational &);

	void PrintRational() const;
	void PrintRationalFloat();
};
