#include <iostream>
#include <cstdlib>
#include<iomanip>
#include "Rational.h"

using namespace std;

// Constructor

Rational::Rational(int n, int d) {
	numerator = n;
	denominator = d;
	reduction();
}

//Addition
Rational Rational::operator+ (const Rational &a) {
	Rational sum;
	sum.numerator = numerator * a.denominator + denominator * a.numerator;
	sum.denominator = denominator * a.denominator;
	sum.reduction();
	
	return sum;
}

//Subtraction
Rational Rational::operator- (const Rational &s) {
	Rational sub;
	sub.numerator = numerator * s.denominator - denominator * s.numerator;
	sub.denominator = denominator * s.denominator;
	sub.reduction();

	return sub;
}

//Multiplication
Rational Rational::operator* (const Rational &m) {
	Rational mult;
	mult.numerator = numerator * m.numerator;
	mult.denominator = denominator * m.denominator;
	mult.reduction();

	return mult;
}

//Division
Rational Rational::operator/ (const Rational &d) {
	Rational div;
	
	if (d.numerator != 0) {
		div.numerator = denominator * d.denominator;
		div.denominator = denominator * d.numerator;
		div.reduction();
	}
	else {
		cout << "Error: Cannot divide by zero " << endl;
	}
	return div;

}//Greater than
bool Rational::operator> (const Rational &g) {
	if (static_cast<double> (numerator) / denominator >
		static_cast<double>(g.numerator) / g.denominator)

		return true;

	else

		return false;
}

//Equal to
bool Rational::operator== (const Rational &e) {
	if (numerator == e.numerator && denominator == e.denominator)
		return true;

	else
		return false;
}

//Not Equal to
bool Rational::operator!= (const Rational &ne) {
	return !(*this == ne);
}

//Less than
bool Rational::operator< (const Rational &l) {
	if (static_cast<double> (numerator) / denominator >
		static_cast<double>(l.numerator) / l.denominator)

		return true;

	else

		return false;
}
/*
//Less or Equal to
bool Rational::operator== (const Rational &ge) {
	return *this == ge || *this > ge;
}*/
//Print Rational
/*void Rational::printRational(void) {
	if (numerator == 0)
		cout << numerator;
	else if (denominator == 1)
		cout << numerator;
	else
		cout << numerator << "/" << denominator << " (" << setprecision(2) << ") ";
}*/

//Print Rational
void Rational::printRational(void) {
	cout << numerator << "/" << denominator << " (" << setprecision(2) 
		<< numerator * 1.0 / denominator << ") " << endl;
}
//Print Rational as double
void Rational::printRationalAsDouble(void) {
	if (static_cast<double> (numerator) / denominator);
}

//Reduction
void Rational::reduction(void) {
	int la, gcd = 1;
	la = (numerator > denominator) ? numerator : denominator;
	
	for (int x = 2; x <= la; ++x)
		if (numerator % x == 0 && denominator % x == 0)
			gcd == x;

	numerator /= gcd;
	denominator /= gcd;
}

//Alberto Garib
