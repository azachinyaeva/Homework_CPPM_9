#include <iostream>
#include <string>
#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int num, denum;
	std::cout << "Введите числитель дроби 1: \t";
	std::cin  >> num;
	std::cout << "Введите знаменатель дроби 1: \t";
	std::cin  >> denum;
	Fraction f1(num, denum);
	std::cout << "Введите числитель дроби 2: \t";
	std::cin >> num;
	std::cout << "Введите знаменатель дроби 2: \t";
	std::cin >> denum;
	Fraction f2(num, denum);
	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << '\n';
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << '\n';
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n';
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << '\n';
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << ++f1 * f2 << '\n';
	std::cout << "Значение дроби 1 = " << f1 << '\n';
	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << f1-- * f2 << '\n';
	std::cout << "Значение дроби 1 = " << f1 << '\n';
	return 0;
}