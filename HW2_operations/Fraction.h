#pragma once
#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:

Fraction(int numerator, int denominator); 

static int NOD(int a, int b); 

Fraction reduction(int a, int b) const;

std::string print_info() const;

Fraction operator+(const Fraction& other) const;

Fraction operator-(const Fraction& other) const;

Fraction operator*(const Fraction& other) const;

Fraction operator/(const Fraction& other) const;

Fraction operator++ ();

Fraction operator++ (int);

Fraction operator-- ();

Fraction operator-- (int);

friend std::ostream& operator<< (std::ostream& out, const Fraction& fraction);

};
