// compstr2.cpp -- string Ŭ������ ����Ͽ� ���ڿ� ��

#include "stdafx.h"
#include <iostream>
#include <string>	// string Ŭ����

int main()
{
	using namespace std;

	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}

	cout << "������ ���� �Ŀ� �ܾ�� " << word << "�Դϴ�.\n";

	cin.get();
	return 0;
}