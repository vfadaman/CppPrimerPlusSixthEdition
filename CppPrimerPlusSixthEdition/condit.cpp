// condit.cpp -- ���ǿ�����

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int a, b;
	cout << "�ΰ��� ������ �Է��Ͻʽÿ�: ";
	cin >> a >> b;
	cout << "���߿��� �� ū ������ ";
	int c = a > b ? a : b;	//a>b �̸� c=a, �׷��� ������ c =b
	cout << c << "�Դϴ�.\n";

	cin.get();
	cin.get();
	return 0;
}