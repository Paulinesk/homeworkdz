#include <iostream>

const double pi = 3.14; //????????? ?????????? pi ??? ????????? ? ??????????? ?? ???????? 3.14

double lengthOfCircle(double r) // ??????? ???????, ??????????? 1 ????? ???? double ? ???????? ????????? ? ???????????? ????? ??????????
{
	return 2.0 * pi * r;
}

double squareOfCircle(double r) // ??????? ???????, ??????????? 1 ????? ???? double ? ???????? ????????? ? ???????????? ??????? ?????
{
	return pi * r * r;

}
int main()
{
	setlocale(LC_ALL, "Russian"); // ?????????? ??????? setlocale ??? ????????? ???????? ?????
	double r; //????????? ?????????? r
	std::cout << "??????? ?????? ????? r:" << std::endl;
	std::cin >> r; // ?????? ???????? ?????????? ? ??????????
	std::cout << "????? ?????????? = " << lengthOfCircle(r) << std::endl; // ????? ?????????? (????? ??????????) ?? ????? ? ??????? ?????? ?-?
	std::cout << "??????? ????? = " << squareOfCircle(r) << std::endl; // ????? ?????????? (??????? ?????) ?? ????? ? ??????? ?????? ?-?
	return 0;
}