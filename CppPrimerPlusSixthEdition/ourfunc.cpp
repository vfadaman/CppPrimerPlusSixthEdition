// ourfunc.cpp -- ����ڰ� �ۼ��ϴ� �Լ��� �����Ѵ�.
#include "stdafx.h"
#include <iostream>
void simon(int); // simon()�� ���� �Լ� ����

int main()
{
	using namespace std;
	simon(3);
	cout << "���� �ϳ��� ���ÿ�: ";
	int count;
	cin >> count;
	simon(count);
	cout << "��!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon ��, �߰����� " << n << "�� �ε����." << endl;
}