// structur.cpp -- 간단한 구조체
#include "stdafx.h"
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double  price;
};

int main()
{
	using namespace std;

	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	// 참고 : 어떤 C++ 시스템에서는 다음과 같은 형식을 요구한다.
	// static inflatable guest =

	cout << "지금 판매하고 있는 모형 풍선은\n" << guest.name;
	cout << "와 " << pal.name << "입니다.\n";
	cout << "두 제품을 $";
	cout << guest.price + pal.price << "에 드리겠습니다!\n";

	cin.get();
	return 0;
}
