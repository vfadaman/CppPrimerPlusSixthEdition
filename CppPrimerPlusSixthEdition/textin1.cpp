// textin1.cpp -- while ������ ���� �б�

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	char ch;
	int count = 0;			// ī���͸� 0���� �����Ѵ�.
	cout << "���ڵ��� �Է��Ͻÿ�; �������� #�� �Է��Ͻÿ�:\n";
	cin >> ch;				// ���ڸ� �Ѱܹ޴´�.
	while (ch != '#')		// ���ڰ� #���� �˻��Ѵ�.
	{
		cout << ch;			// ���ڸ� ȭ������ �����Ѵ�.
		++count;			// ���� ī���͸� ������Ų��.
		cin >> ch;			// ���� ���ڸ� �Ѱܹ޴´�.
	}

	cout << endl << count << " ���ڸ� �о����ϴ�.\n";
	cin.get();
	cin.get();
	cin.get();
	return 0;
}