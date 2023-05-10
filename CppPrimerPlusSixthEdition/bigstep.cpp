// bigstep.cpp -- count as directed

#include "stdafx.h"
#include <iostream>

int main()
{
	using std::cout;		// using 선언
	using std::cin;
	using std::endl;

	cout << "정수를 하나 입력하십시오: ";
	int by;
	cin >> by;
	cout << "갱신크기 " << by << "s:\n";
	
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}

	cin.get();
	cin.get();
	return 0;

}