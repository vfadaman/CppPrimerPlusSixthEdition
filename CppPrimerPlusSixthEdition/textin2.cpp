// textin2.cpp -- cin.get(char) ����ϱ�

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;

	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << " ���ڸ� �о����ϴ�." << endl;

	cin.get();
	return 0;
}