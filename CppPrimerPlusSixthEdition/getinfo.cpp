// getinfo.cpp -- �Է°� ���
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "����� ��� ������ �ִ�?" << endl;
	cin >> carrots;
	cout << "���� �ΰ��� �� �ִ�. ";
	carrots = carrots + 2;
	cout << "���� ����� ��� " << carrots << "���̴�." << endl;
	cin.get();
	cin.get();
	return 0;
}