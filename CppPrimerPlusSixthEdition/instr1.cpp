// instr1.cpp -- �������� ���ڿ��� �д´�.
#include "stdafx.h"
#include <iostream>
int main()
{
	using namespace std;

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "�̸��� �Է��Ͻʽÿ�:\n";
	cin >> name;
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:\n";
	cin >> dessert;
	cout << "���ִ� " << dessert;
	cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << " ��!\n";
	cin.get();
	cin.get();
	cin.get();
	return 0;
}