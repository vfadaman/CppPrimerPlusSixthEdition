// getinfo.cpp -- 입력과 출력
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "당근을 몇개나 가지고 있니?" << endl;
	cin >> carrots;
	cout << "여기 두개가 더 있다. ";
	carrots = carrots + 2;
	cout << "이제 당근은 모두 " << carrots << "개이다." << endl;
	cin.get();
	cin.get();
	return 0;
}