// forloop.cpp -- for 루프

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "C++가 루프를 사용합니다.\n";
	}

	cout << "루프를 언제 끝내야 하는지 C++은 알고 있습니다.\n";

	cin.get();
	return 0;
}