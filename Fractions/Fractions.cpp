﻿/*Lesson 2: 1. Создать класс «Дробь» для представления простой дроби. Поля класса: ■■ числитель, знаменатель.
Функции - члены:
	▷▷ конструктор принимающий числитель и знаменатель. В конструкторе использовать список инициализаторов полей класса.
	▷▷конструктор по умолчанию, реализовать через делегирование конструктору с параметрами числитель и знаменатель;
	▷▷вывод на экран дроби;
	▷▷сложение / вычитание / умножение простой дроби с простой дробью;
	▷▷сложение / вычитание / умножение простой дроби с целым числом.
В арифметических операциях предусмотреть возможность вызова операций по цепочке используя указатель this.
Предусмотреть сокращение дроби. Сокращение рекомендуется производить в конструкторе.*/

#include "Fraction.h";
#include <iostream>
using namespace std;


bool get_input(Fraction& fract)//принимаем указатель на созданный объект Fraction
{
	int num, den;
	cout << "Введите числитель и знаменатель через пробел: " << endl;
	cin >> num >> den;
	if (cin.fail())
		return false;
	Fraction f(num, den);//передаем данные в конструктор с параметрами (инициализируем поля объектов fraction1 и fraction2)
	fract = f;
	return true;
}

int main()
{
	setlocale(LC_ALL, "ru");
	Fraction fraction1, fraction2;//создаем объекты типа Fraction конструктором по умолчанию  

	if (((!get_input(fraction1)) || (!get_input(fraction2))))
	{
		cout << "Invalid Input!" << endl;
	}
	else
	{		
		Fraction result = fraction1 + fraction2;
		cout << "Сложение = " << result.to_string() << endl;
	}	
}
