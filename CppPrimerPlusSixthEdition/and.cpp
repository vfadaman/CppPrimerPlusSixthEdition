// and.cpp -- ���� ������

#include "stdafx.h"
#include <iostream>

const int ArSize = 6;

int main()
{
	using namespace std;

	float naaq[ArSize];		// NAAQ ; New Age Awareness Quotients
	cout << "������� �������� �ڰ�����(NAAQ)�� �Է��Ͻʽÿ�.\n"
		<< ArSize << "���� �����͸� ��� �Է��߰ų�, ������ �Է��ϸ�\n"
		<< "while ������ Ż���մϴ�.\n";

	int i = 0;
	float temp;
	cout << "ù��° ��: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)		// �ΰ��� Ż������
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)			// �迭�� ������ ������ ���� ������
		{
			cout << "�� ���� ��: ";
			cin >> temp;		// ���� ���� �Է¹޴´�.
		}
	}

	if (i == 0)
		cout << "�Է��� �����Ͱ� �����Ƿ� ���α׷��� �����մϴ�.\n";
	else
	{
		cout << "����� NAAQ�� �Է��Ͻʽÿ�: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > you)
			{
				++count;
			}
		}

		cout << "����� �߿��� " << count;
		cout << "���� ��ź��� NAAQ�� �����ϴ�.\n";
	}
	cin.get();
	cin.get();
	return 0;
}