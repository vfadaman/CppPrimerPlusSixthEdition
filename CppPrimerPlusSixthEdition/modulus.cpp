// modulus.cpp -- %�����ڸ� ����Ͽ� �Ŀ�带 �������� ��ȯ�Ѵ�.
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	const int Lbs_per_stn = 14;
	int lbs;

	cout << "����� ü���� �Ŀ�� ������ �Է��Ͻʽÿ�: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;			// ���� ��������
	int pounds = lbs % Lbs_per_stn;			// �������� �Ŀ���
	cout << lbs << " �Ŀ��� " << stone
		<< " ����," << pounds << " �Ŀ�� �Դϴ�.\n";
	cin.get();
	cin.get();
	return 0;
}