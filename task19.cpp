#include <iostream>

void checkNumber(int n) // ??????? ???????, ??????????? 1 ????? ???? int ? ???????? ????????? ? ?????????????? ???????? 
{
	if (n > 99 && n < 1000) // ???? ????????? ????? ???. ???????????, ????????? ????????
	{
		int n1, n2, n3, s, p, b; // ????????? ??????????
		n1 = n / 100; // ??????? 1-? ????? ?????
		n2 = n / 10 % 10; // ??????? 2-? ????? ?????
		n3 = n % 10; // ??????? 3-? ????? ?????
		s = n1 + n2 + n3; // ????? ????
		p = n1 * n2 * n3; // ???????????? ????
		std::cout << "??????? ????? b ??? ????????? ? ????????????? ???? ????? n:" << std::endl;
		std::cin >> b; // ???? ????? b ? ??????????

		if (p > b) // ???? ???????????? ???? > ?????????? ????? b
		{
			std::cout << "???????????? ???? ????? = " << p << " ?????? ????? b." << std::endl;
		}
		else // ???? ???????????? ???? < ?????????? ????? b
		{
			std::cout << "???????????? ???? ????? = " << p << " ?????? ????? b." << std::endl;
		}

		if (s % 7 == 0) // ???? ????? ???? ?????? 7
		{
			std::cout << "????? ???? ????? = " << s << " ?????? 7." << std::endl;
		}
		else // ???? ????? ???? ?? ?????? 7
		{
			std::cout << "????? ???? ????? = " << s << " ?? ?????? 7." << std::endl;
		}
	}
	else // ???? ????? ?? ???. ???????????, ??????? ????????? ?? ?????? ?????
	{
		std::cout << "??????! ??????? ??????????? ????? n!" << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ?????????? ?-? setlocale ??? ????????? ???????? ?????
	int n; // ????????? ??????????
	std::cout << "??????? ??????????? ????? n:" << std::endl;
	std::cin >> n; // ???? ????? n ? ??????????
	checkNumber(n); // ???????? ?-? 
	return 0;
}