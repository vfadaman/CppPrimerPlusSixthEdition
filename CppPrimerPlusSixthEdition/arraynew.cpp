// arraynew.cpp -- �迭�� ���� new ������ ���
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	double * p3 = new double[3];	// double�� ������ 3���� ������ �� �ִ� ������ ��������.

	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 + 1;	// �����͸� ������Ų��.
	cout << "������ p3[1]�� " << p3[0] << "�̰�, ";
	cout << "p3[1]�� " << p3[1] << "�Դϴ�.\n";
	p3 = p3 - 1;	// �ٽ� ���� ��ġ�� �����Ѵ�.
	delete[] p3;	// �迭 �޸𸮸� �����Ѵ�.

	cin.get();
	return 0;
}