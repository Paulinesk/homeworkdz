#include <iostream>
void monthAndSeason(int month)
{
	if (month == 1)
	{
		std::cout << "����� - ������. ����� ���� - ����" << std::endl;
	}
	if (month == 2)
	{
		std::cout << "����� - �������. ����� ���� - ����" << std::endl;
	}
	if (month == 3)
	{
		std::cout << "����� - ����. ����� ���� - �����" << std::endl;
	}
	if (month == 4)
	{
		std::cout << "����� - ������. ����� ���� - �����" << std::endl;
	}
	if (month == 5)
	{
		std::cout << "����� - ���. ����� ���� - �����" << std::endl;
	}
	if (month == 6)
	{
		std::cout << "����� - ����. ����� ���� - ����" << std::endl;
	}
	if (month == 7)
	{
		std::cout << "����� - ����. ����� ���� - ����" << std::endl;
	}
	if (month == 8)
	{
		std::cout << "����� - ������. ����� ���� - ����" << std::endl;
	}
	if (month == 9)
	{
		std::cout << "����� - ��������. ����� ���� - �����" << std::endl;
	}
	if (month == 10)
	{
		std::cout << "����� - �������. ����� ���� - �����" << std::endl;
	}
	if (month == 11)
	{
		std::cout << "����� - ������. ����� ���� - �����" << std::endl;
	}
	if (month == 12)
	{
		std::cout << "����� - �������. ����� ���� - ����" << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int month;
	std::cout << "������� ����� ������" << std::endl;
	std::cin >> month;
	monthAndSeason(month);
	return 0;
}