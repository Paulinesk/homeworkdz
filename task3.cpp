#include <iostream>

double squareOfTriangle(double a, double b) // вызываем функцию, принимающую 2 числа типа double в качестве параметров и возвращающую площадь треугольника
{
	return (a * b) / 2;
}

double hypotenuse(double a, double b) // вызываем функцию, принимающую 2 числа типа double в качестве параметров и возвращающую длину гипотенузы
{
	return sqrt(a * a + b * b);
}

int main() 
{
	setlocale(LC_ALL, "Russian"); // используем ф-ю setlocale дл€ установки русского €зыка
	double a, b; // объ€вл€ем переменные 
	std::cout << "¬ведите катеты a и b пр€моугольного треугольника:" << std::endl;
	std::cin >> a >> b; // вводим переменные a и b с клавиатуры
	std::cout << "ѕлощадь треугольника = " << squareOfTriangle(a, b) << std::endl; // вывод площади треугольника на экран с помощью вызова ф-и
	std::cout << "√ипотенуза = " << hypotenuse(a, b) << std::endl; // вывод длины гипотенузы на экран с помощью вызова ф-и
	return 0;
}