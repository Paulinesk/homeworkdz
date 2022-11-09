#include <iostream>

double polToDec_x(double p, double w) // создаем ф-ю, принимающую 2 числа типа double в качестве параметров и возвращающую значение декартовой координаты x
{
	return p * cos(w);
}

double polToDec_y(double p, double w) // создаем ф-ю, принимающую 2 числа типа double в качестве параметров и возвращающую значение декартовой координаты y
{
	return p * sin(w);
}

int main()
{
	setlocale(LC_ALL, "Russian"); // используем ф-ю setlocale дл€ установки русского €зыка
	double p, w; // объ€вл€ем переменные
	std::cout << "¬ведите p и w в пол€рной системе координат:" << std::endl;
	std::cin >> p >> w; // вводим переменные p и w с клавиатуры
	std::cout << " оординаты в декартовой системе координат: " << "x = " << polToDec_x(p, w) << " " << "y = " << polToDec_y(p, w) << std::endl; // вывод координат с помощью вызова ф-й
	return 0;
}
