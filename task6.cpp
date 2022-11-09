#include <iostream>

double polToDec_x(double p, double w) // ������� �-�, ����������� 2 ����� ���� double � �������� ���������� � ������������ �������� ���������� ���������� x
{
	return p * cos(w);
}

double polToDec_y(double p, double w) // ������� �-�, ����������� 2 ����� ���� double � �������� ���������� � ������������ �������� ���������� ���������� y
{
	return p * sin(w);
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ���������� �-� setlocale ��� ��������� �������� �����
	double p, w; // ��������� ����������
	std::cout << "������� p � w � �������� ������� ���������:" << std::endl;
	std::cin >> p >> w; // ������ ���������� p � w � ����������
	std::cout << "���������� � ���������� ������� ���������: " << "x = " << polToDec_x(p, w) << " " << "y = " << polToDec_y(p, w) << std::endl; // ����� ��������� � ������� ������ �-�
	return 0;
}
