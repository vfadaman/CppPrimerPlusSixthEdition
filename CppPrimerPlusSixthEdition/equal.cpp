// equal.cpp -- '����' �����ڿ� ���Կ�����

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int quizscores[10] =
	{ 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };

	cout << "�ùٸ� ���:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
	{
		cout << i << "�� ������ ������ 20�Դϴ�.\n";
		// ���� : ���� ���α׷��� �������� �ʾƵ� �������� Ȯ���� �� �ִ�.
	}

	cout << "�߸��� ���:\n";
	for (i = 0; quizscores[i] = 20; i++)
	{
		cout << i << "�� ������ ������ 20�Դϴ�.\n";
	}

	cin.get();
	return 0;
}