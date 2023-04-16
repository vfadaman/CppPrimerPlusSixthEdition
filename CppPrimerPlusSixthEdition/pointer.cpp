// pointer.cpp -- ó������ ���� ������ ����

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int updates = 6;		// int�� ������ ����
	int * p_updates;		// int���� �����ϴ� �����͸� ����

	p_updates = &updates;	// int���� �ּҸ� �����Ϳ� ����

	// ���� �ΰ��� ������� ǥ��
	cout << "��: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// �ּҸ� �ΰ��� ������� ǥ��
	cout << "�ּ�: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// �����͸� ����Ͽ� ���� ����
	*p_updates = *p_updates + 1;
	cout << "����� updates = " << updates << endl;

	cin.get();
	return 0;
}