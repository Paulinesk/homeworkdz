#include <iostream>

void palindrom(int n) // ������� �-�, ����������� 1 ����� ���� int � �������� ��������� � ������������, �������� �� ����� �����������
{
	if (n > 999 && n < 10000) // ���� ����� ��������������, ���������� ��������
	{
		int n1, n2, n3, n4; // ��������� ����������
		n1 = n / 1000; // ������� 1 ���� � ������� ��������� ��������. ������� /
		n2 = n / 100 % 10; // ������� 2 ����� � ������� ���������� ��������. ������� / � ������ ������� %
		n3 = n / 10 % 10; // ������� 3 �����
		n4 = n % 10; // ������� 4 �����

		if (n1 == n4 && n2 == n3) // ���� 1 ����� = 4 ����� � 2 ����� = 3 �����, �� ����� ��������� 
		{
			std::cout << "����� �������� �����������." << std::endl;
		}
		else // � ��������� ������ ����� �� ���. �����������
		{
			std::cout << "����� �� �������� �����������." << std::endl;
		}
	}
	else // ���� ����� �� ���. ��������������, ������� ��������� �� ������ �����
	{
		std::cout << "������! ������� �������������� �����." << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ���������� �-� setlocale ��� ��������� �������� �����
	int n; // ��������� ����������
	std::cout << "������� �������������� ����� n:" << std::endl; 
	std::cin >> n; // ���� ����� n � ����������
	palindrom(n); // ����� �������
	return 0;
}