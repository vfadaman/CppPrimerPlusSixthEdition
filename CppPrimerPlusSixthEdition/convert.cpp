// convert.cpp -- ������ �Ŀ��� ȯ���Ѵ�.

#include "stdafx.h"
#include <iostream>

int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout << "ü���� ���� ������ �Է��ϼ���: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " ������ ";
	cout << pounds << " �Ŀ�� �Դϴ�." << endl;
	cin.get();
	cin.get();
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}