#include <iostream>

double squareOfTrap(double b1, double b2, double h) // ������� �������, ����������� 3 ����� ���� double � �������� ����������, � ������������ ������� ��������
{
	return ((b1 + b2) / 2 * h); // ������� ������� �������� �� �������: ��������� ��������� * ������
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ���������� ������� setlocale ��� ��������� �������� �����
	double b1, b2, h; // ��������� ���������� b1, b2, h
	std::cout << "������� ��������� �������� b1 � b2 � ������ h:" << std::endl;
	std::cin >> b1 >> b2 >> h; // ������ �������� ���������� � ����������
	std::cout << "������� �������� = " << squareOfTrap(b1, b2, h) << std::endl; // ����� ���������� (����������� ������� ��������) �� ����� � ������� ������ �-�
	return 0;
}