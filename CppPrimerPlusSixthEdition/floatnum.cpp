// floatnum.cpp -- �ε��Ҽ�����
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield); // �����Ҽ��� �������� ���

	float tub = 10.0 / 3.0; // ��ȿ���� 6��
	double mint = 10.0 / 3.0; // ��ȿ���� 15��
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nten million tub = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << "and a million mints = ";
	cout << million * mint << endl;
	cin.get();
	return 0;
}