#include <iostream>

double squareOfTriangle(double a, double b) // �������� �������, ����������� 2 ����� ���� double � �������� ���������� � ������������ ������� ������������
{
	return (a * b) / 2;
}

double hypotenuse(double a, double b) // �������� �������, ����������� 2 ����� ���� double � �������� ���������� � ������������ ����� ����������
{
	return sqrt(a * a + b * b);
}

int main() 
{
	setlocale(LC_ALL, "Russian"); // ���������� �-� setlocale ��� ��������� �������� �����
	double a, b; // ��������� ���������� 
	std::cout << "������� ������ a � b �������������� ������������:" << std::endl;
	std::cin >> a >> b; // ������ ���������� a � b � ����������
	std::cout << "������� ������������ = " << squareOfTriangle(a, b) << std::endl; // ����� ������� ������������ �� ����� � ������� ������ �-�
	std::cout << "���������� = " << hypotenuse(a, b) << std::endl; // ����� ����� ���������� �� ����� � ������� ������ �-�
	return 0;
}