#include <iostream>
void advice(int weight, int height) // ������� �-�, ����������� 2 ����� ���� int � �������� ��������� � ����������� ��������� ��� �� ������ ����� � ����
{
	int iWeight = 0;
	iWeight = height - 100;
	if (weight < iWeight) // ��������� ��� ������ ���������� ����
	{
		std::cout << "��� ������� ����������� �� ���������� ����. " << "��� ��������� ���: " << iWeight << std::endl;
	}
	if (weight > iWeight) // ��������� ��� ������ ���������� ����
	{
		std::cout << "��� ������� �������� �� ���������� ����. " << "��� ��������� ���: " << iWeight << std::endl;
	}
	if (weight == iWeight) // ��������� ��� ����� ����������
	{
		std::cout << "��� ��������� ���: " <<iWeight << " ��� ��� ����� ���������� ����. ��� �������!"  << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // ������������� �-� setlocale ��� ��������� �������� �����
	int weight, height; // ��������� ����������
	std::cout << "������� ���� ���� (����� �����)" << std::endl;
	std::cin >> height; // ���� ����� � ����������
	std::cout << "������� ���� ��� (����� �����)" << std::endl;
	std::cin >> weight; // ���� ���� � ����������
	advice(weight, height); // ����� �-� ��� �������� ���������� ���� �� ������ ���������� ������
	return 0;
}
