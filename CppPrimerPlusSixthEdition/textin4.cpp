// textin4.cpp -- cin.get()���� ���� �б�

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF) // ���� �� �˻�
	{
		cout.put(char(ch));
		++count;
	}
	cout << count << " ���ڸ� �о����ϴ�.\n";

	cin.get();
	return 0;
}