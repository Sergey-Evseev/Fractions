#pragma once
#include "Fraction.h"; 
#include <string>
#include <sstream>
#include <iostream> 

using namespace std;

class Fraction
{
	public:
		Fraction(); //конструктор по умолчанию
		Fraction(int n, int d); // конструктор принимающий числитель и знаменатель 
		int getNumerator() const;
		int getDenominator() const;
		
		string to_string();
		Fraction operator+(Fraction &second);
	private:
		int numerator;
		int denominator;	
};

