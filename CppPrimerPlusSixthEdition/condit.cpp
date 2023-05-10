// condit.cpp -- 조건연산자

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int a, b;
	cout << "두개의 정수를 입력하십시오: ";
	cin >> a >> b;
	cout << "둘중에서 더 큰 정수는 ";
	int c = a > b ? a : b;	//a>b 이면 c=a, 그렇지 않으면 c =b
	cout << c << "입니다.\n";

	cin.get();
	cin.get();
	return 0;
}