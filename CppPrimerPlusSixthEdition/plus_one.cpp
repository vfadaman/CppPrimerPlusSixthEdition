// plus_one.cpp -- 증가연산자

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int a = 20;
	int b = 20;

	cout << "a   = " << a << ":   b = " << b << endl;
	cout << "a++ = " << a++ << ":  ++b = " << ++b << endl;
	cout << "a   = " << a << " :  b = " << b << endl;

	cin.get();
	return 0;
}