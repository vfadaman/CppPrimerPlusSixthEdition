// forstr1.cpp -- for ������ ����� ���ڿ� ó��
// �ѱ��� �۵����� ����.
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "�ܾ� �ϳ��� �Է��Ͻʽÿ�: ";
	string word;
	cin >> word;

	// ���ڿ��� �Ųٷ� ����Ѵ�.
	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << "\n����.\n";

	cin.get();
	cin.get();
	
	return 0;
}