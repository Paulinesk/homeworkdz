#include <iostream>
void luckyNumber(int number) // ������� �-�, ����������� 1 ����� ���� int � ���-�� ��������� � ������������ �������� �� ��������� ����� ����������
{
	if (number > 99999 && number < 1000000) // �������� �� ���� 6-�������� �����
	{
		if (number / 100000 + number / 10000 % 10 + number / 1000 % 10 == number / 100 % 10 + number / 10 % 10 + number % 10) // ��������� ��������� ����� �� ����� � ���������� ����� ������ 3 ���� � ����� ��������� 3 ���� � ������� ������� ������ � ������ �������
		{
			std::cout << "���������� �����" << std::endl;
		}
			
		else
		{
			std::cout << "������������ �����" << std::endl;
		}
	}
	else 
	{
		std:: cout << "������. ������� 6-������� �����";
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // ������������� �-� setlocale ��� ��������� �������� �����
	int number; // ��������� ����������
	std::cout << "������� 6-������� �����" << std::endl;
	std::cin >> number; // ���� 6-�������� ����� � ����������
	luckyNumber(number); // ����� �-�
	return 0;
}