// structur.cpp -- ������ ����ü
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

	// ���� : � C++ �ý��ۿ����� ������ ���� ������ �䱸�Ѵ�.
	// static inflatable guest =

	cout << "���� �Ǹ��ϰ� �ִ� ���� ǳ����\n" << guest.name;
	cout << "�� " << pal.name << "�Դϴ�.\n";
	cout << "�� ��ǰ�� $";
	cout << guest.price + pal.price << "�� �帮�ڽ��ϴ�!\n";

	cin.get();
	return 0;
}
