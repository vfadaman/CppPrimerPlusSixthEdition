// bigstep.cpp -- count as directed

#include "stdafx.h"
#include <iostream>

int main()
{
	using std::cout;		// using ����
	using std::cin;
	using std::endl;

	cout << "������ �ϳ� �Է��Ͻʽÿ�: ";
	int by;
	cin >> by;
	cout << "����ũ�� " << by << "s:\n";
	
	for (int i = 0; i < 100; i = i + by)
	{
		cout << i << endl;
	}

	cin.get();
	cin.get();
	return 0;

}