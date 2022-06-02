#include "Fraction.h"
#include <string>
#include <iostream> 
using namespace std;


Fraction::Fraction()//конструктор по умолчанию
{

}
Fraction::Fraction(int n, int d)// конструктор, принимающий числитель и знаменатель
{
	this->numerator = n;
	this->denominator = d;
}

int Fraction::getNumerator() const
{
	return numerator;
}

int Fraction::getDenominator() const
{
	return denominator;
}

Fraction Fraction::operator+(Fraction &second)
{
	int n1 = getNumerator() * second.getDenominator();
	int n2 = second.getNumerator() * getDenominator();
	int d = getDenominator() * second.getDenominator();
	return Fraction(n1 + n2, d);
}
string Fraction::to_string()
{
	std::stringstream s;
	s << getNumerator() << "/" << getDenominator();
	return s.str();
}