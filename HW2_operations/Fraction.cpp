#include "Fraction.h"


	Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int Fraction::NOD(int a, int b) {

		while (b != 0) {
			a = a % b;
			auto tmp = a;
			a = b;
			b = tmp;
		}
		return a;
	}

	Fraction Fraction::reduction(int a, int b) const {
		int nod = NOD(a, b);
		if (nod <= 0)
		{
			return Fraction(a, b);
		};
		return Fraction(a / nod, b / nod);
	}

	std::string Fraction::print_info() const
	{
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
	}

	Fraction Fraction::operator+(const Fraction& other) const {
		int a = (numerator_ * other.denominator_) + (other.numerator_ * denominator_);
		int b = denominator_ * other.denominator_;
		return reduction(a, b);
	}

	Fraction Fraction::operator-(const Fraction& other) const {
		int a = (numerator_ * other.denominator_) - (other.numerator_ * denominator_);
		int b = denominator_ * other.denominator_;
		return reduction(a, b);
	}

	Fraction Fraction::operator*(const Fraction& other) const {
		int a = numerator_ * other.numerator_;
		int b = denominator_ * other.denominator_;
		return reduction(a, b);
	}

	Fraction Fraction::operator/(const Fraction& other) const {
		int a = numerator_ * other.denominator_;
		int b = denominator_ * other.numerator_;
		return reduction(a, b);
	}

	Fraction Fraction::operator++ () {
		*this = reduction(numerator_ + denominator_, denominator_);
		return *this;
	}

	Fraction Fraction::operator++ (int) {
		Fraction temp = *this;
		++(*this);
		return temp;
	}

	Fraction Fraction::operator-- () {
		numerator_ -= denominator_;
		return reduction(numerator_, denominator_);
	}

	Fraction Fraction::operator-- (int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	std::ostream& operator<< (std::ostream& out, const Fraction& fraction)
	{
		out << fraction.numerator_ << "/" << fraction.denominator_;
		return out;
	}

