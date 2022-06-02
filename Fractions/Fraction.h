#pragma once
#include "Fraction.h"; 
#include <string>
#include <sstream>
#include <iostream> 

using namespace std;

class Fraction
{
	public:
		Fraction(); //����������� �� ���������
		Fraction(int n, int d); // ����������� ����������� ��������� � ����������� 
		int getNumerator() const;
		int getDenominator() const;
		
		string to_string();
		Fraction operator+(Fraction &second);
	private:
		int numerator;
		int denominator;	
};

