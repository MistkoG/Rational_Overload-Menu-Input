#ifndef RATIONAL_H 
#define RATIONAL_H

class Rational
{
public:
	Rational(int = 0, int = 1);  // default constructor 
	Rational operator+(const Rational &);
	Rational operator-(const Rational &);
	Rational operator*(const Rational &);
	Rational operator/(const Rational &);
	bool operator==(const Rational &);
	bool operator!=(const Rational &);
	bool operator>(const Rational &);
	bool operator<(const Rational &);
	void printRational(void);
	void printRationalAsDouble(void);

private:
	int numerator;
	int denominator;
	double convertToDouble();
	void reduction(void);   // utility function 18 
};
#endif

//Alberto Garib
