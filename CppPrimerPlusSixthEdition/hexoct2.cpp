// hexoct2.cpp -- ���� 16������ 8������ ���÷��� �Ѵ�.
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "�մ� ���Ŵ� ���� �ݴϴ�!" << endl;
	cout << "�����ѷ� " << chest << " (10����)" << endl;
	cout << hex; // ������ �ٲٴ� ������
	cout << "�㸮�ѷ� " << waist << " (16����)" << endl;
	cout << oct; // ������ �ٲٴ� ������
	cout << "�νɱ��� " << inseam << " (8����)" << endl;
	cin.get();
	return 0;
}