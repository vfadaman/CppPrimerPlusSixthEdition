// hexoct1.cpp -- 16�� ������ ����� 8�� ������ ����� �����ش�.
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int chest = 42;
	int waist = 0x42;//66
	int inseam = 042;//34

	cout << "�մ� ���Ŵ� �Ѹ���� �����ݴϴ�!\n";
	cout << "�����ѷ� " << chest << "\n";
	cout << "�㸮�ѷ� " << waist << "\n";
	cout << "�νɱ��� " << inseam << "\n";
	cin.get();
	return 0;
}