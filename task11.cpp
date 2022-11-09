#include <iostream>

void countCost(double n) //������� �-�, ����������� 1 ����� ���� double � �������� ���������, ������������, ��������������� �� ������, � ����������� ��������� �������
{
	if (n > 1000) // ���� ��������� ������� > 1000, ����������� ������ 10%
	{
		n = n * (1 - 0.1);
		std::cout << "��������� ������� � ������ ������ 10%: " << n << std::endl;
	}
	else // ���� ��������� ������� < 1000, ������ �� �����������, ��������� ������� �������� �������
	{
		std::cout << "������ �� ���������������. ��������� �������: " << n << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // ���������� �-� setlocale ��� ��������� �������� �����
	double n; // ��������� ����������
	std::cout << "������� ��������� �������:" << std::endl; 
	std::cin >> n; // ���� ���������� n � ����������
	countCost(n); // �������� �������, ������������, ��������������� �� ������, � ����������� ��������� �������
	return 0;
}