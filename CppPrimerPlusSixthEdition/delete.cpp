// delete.cpp -- delete ������ ���

#include "stdafx.h"
#include <iostream>
#include <cstring>	// �Ǵ� string.h

using namespace std;
char * getname(void);	// �Լ�����

int main()
{
	char *name;	// �����͸� �������� �޸𸮴� �������� �ʴ´�.

	name = getname();	// ���ڿ��� �ּҸ� name�� �����Ѵ�.
	cout << (int*)name << ": " << name << "\n";
	delete[] name;	// �޸𸮸� �����Ѵ�.

	name = getname(); // ������ �޸𸮸� �ٽ� ����Ѵ�.
	cout << (int *)name << ": " << name << "\n";
	delete[] name;	// �޸𸮸� �ٽ� �����Ѵ�.

	cin.get();
	cin.get();

	return 0;
}

char * getname()	// �� ���ڿ��� ����Ű�� �����͸� �����Ѵ�.
{
	char temp[80];	// �ӽù迭
	cout << "�̸��� �Է��Ͻʽÿ�: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp); // ���ڿ��� �� ���� �������� �����Ѵ�.

	
	return pn;		// �Լ��� ����ɶ� �ӽ� �迭�� temp�� �Ҹ��Ѵ�.
}