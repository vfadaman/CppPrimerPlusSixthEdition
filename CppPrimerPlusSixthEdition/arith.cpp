// arith.cpp -- C++�� ��� ����

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	float hats, heads; // ���� ������ �������� ���

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "���� �ϳ� �Է��Ͻʽÿ�: ";
	cin >> hats;
	cout << "�ٸ� ���� �Է��Ͻʽÿ�: ";
	cin >> heads;

	cout << "hats =" << hats << "; heads = " << heads<< endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	cin.get();
	cin.get();
	return 0;

}