// if.cpp -- if ����

#include "stdafx.h"
#include <iostream>

int main()
{
	using std::cin;		// declaration�� ���
	using std::cout;

	char ch;

	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')		// ������ ��(��ħǥ)���� ���� ����
	{
		if (ch == ' ')		// ch�� ��ĭ���� �˻�
			++spaces;		// ch�� ���� ������ ����
		++total;			// ��ĭ�̵� �ƴϵ� �Ź� ����
		cin.get(ch);
	}
	cout << "�� ������ �� ���ڼ���  " << total << " �̰�, ";
	cout << "�� �߿��� ��ĭ�� " << spaces << "�� �Դϴ�.\n";
	
	cin.get();
	cin.get();

	return 0;
}