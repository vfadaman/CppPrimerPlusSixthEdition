// numstr.cpp -- ��ġ �Է� �ڿ� ���� ���ڿ� �Է�
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
	int year;
	//cin >> year; // �Ʒ�ó�� �ؾ� ����� ó�� ��.
	(cin >> year).get();
	cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "����Ʈ ���� ����:" << year << endl;
	cout << "����:" << address << endl;
	cout << "����� �Ϸ�Ǿ����ϴ�.!\n";
	cin.get();
	cin.get();
	return 0;
}