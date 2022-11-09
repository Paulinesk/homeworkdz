#include <iostream>

double decToPol_p(double x, double y) // создаем ф-ю, принимающую 2 числа типа double в качестве параметров и возвращающую значение пол€рной координаты p
{
	return sqrt(x * x + y * y);
}

double decToPol_w(double x, double y) // создаем ф-ю, принимающую 2 числа типа double в качестве параметров и возвращающую значение пол€рной координаты w
{
	return atan(y / x);
}

int main()
{
	setlocale(LC_ALL, "Russian"); // используем ф-ю setlocale дл€ установки русского €зыка
	double x, y; // объ€вл€ем переменные
	std::cout << "¬ведите x и y в декартовой системе координат:" << std::endl;
	std::cin >> x >> y; // вводим переменные x и y с клавиатуры
	std::cout << " оординаты в пол€рной системе координат: " << "p = " << decToPol_p(x, y) << " " << "w = " << decToPol_w(x, y) << std::endl; // вывод координат с помощью вызова ф-й
	return 0;
} 