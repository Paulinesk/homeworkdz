#include <iostream>

double decToPol_p(double x, double y) // ������� �-�, ����������� 2 ����� ���� double � �������� ���������� � ������������ �������� �������� ���������� p
{
	return sqrt(x * x + y * y);
}

double decToPol_w(double x, double y) // ������� �-�, ����������� 2 ����� ���� double � �������� ���������� � ������������ �������� �������� ���������� w
{
	return atan(y / x);
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ���������� �-� setlocale ��� ��������� �������� �����
	double x, y; // ��������� ����������
	std::cout << "������� x � y � ���������� ������� ���������:" << std::endl;
	std::cin >> x >> y; // ������ ���������� x � y � ����������
	std::cout << "���������� � �������� ������� ���������: " << "p = " << decToPol_p(x, y) << " " << "w = " << decToPol_w(x, y) << std::endl; // ����� ��������� � ������� ������ �-�
	return 0;
} 