// textin3.cpp -- ���� ������ ���� �б�
// Ctrl+Z�� ������ �׳� �����.
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);				// ���� �ϳ��� �д´�.
	while (cin.fail() == false)	// EOF���� �˰��Ѵ�.
	{
		cout << ch;				// ���ڸ� �����Ѵ�.
		++count;
		cin.get(ch);			// ���� ���ڸ� �д´�.
	}

	cout << count << " ���ڸ� �о����ϴ�." << endl;

	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}