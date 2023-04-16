// init_ptr.cpp -- 포인터를 초기화 한다

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int higgens = 5;
	int* pt = &higgens;

	cout << "higgens의 값 = " << higgens
		<< ", higgens의 주소 = " << &higgens << endl;
	cout << "pt의 값 = " << *pt
		<< ", pt의 값 = " << pt << endl;

	cin.get();
	return 0;
}