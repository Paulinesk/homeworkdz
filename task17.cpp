#include <iostream>
void kopeika(int number) // ������� �-�, ����������� 1 ����� ���� int � ���-�� ��������� � ������������ ��������� ����� "�������" � ����������� �� ��������� �����
{
	int n;
	if (number > 0 && number < 100) // �������� �� ��, ����� ��������� ����� ���������� � ��������� �� 1 �� 99
	{
		n = number % 10; // ����������� ��������� ����� � ������� ������ ������� �� �����
		if (n >= 5 && n <= 9 || n == 0 || number == 11) // ���� ��������� ����� ��������� � ��������� �� 5 �� 9, ��� ����� 0, ��� ��������� ����� ����� 11
		{
			std::cout << number << " ������" << std::endl;
		}
		else if (n == 1) // ���� ��������� ����� = 1
		{
			std::cout << number << " �������" << std::endl;
		}
		if (n >= 2 && n <= 4) // ���� ��������� ����� ��������� � ��������� �� 2 �� 4
		{
			std::cout << number << " �������" << std::endl;
		}
	}
	else
	{
		std::cout << "������. ������� ����� � ��������� �� 1 �� 99" << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // ������������� �-� setlocale ��� ��������� �������� �����
	int number; // ��������� ����������
	std::cout << "������� ���-�� ������ �� 1 �� 99" << std::endl;
	std::cin >> number; // ���� ����� � ����������
	kopeika(number); // ����� �-�
	return 0;
}