// ourfunc.cpp -- 사용자가 작성하는 함수를 정의한다.
#include "stdafx.h"
#include <iostream>
void simon(int); // simon()을 위한 함수 원형

int main()
{
	using namespace std;
	simon(3);
	cout << "정수 하나를 고르시오: ";
	int count;
	cin >> count;
	simon(count);
	cout << "끝!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;
}