// strtype1.cpp -- C++ string Ŭ������ ����Ѵ�.
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	char charr1[20];			// �� �迭�� �����Ѵ�.
	char charr2[20] = "jaguar";	// �ʱ�ȭ�� �迭�������Ѵ�.
	string str1;				// �� string ��ü�� �����Ѵ�.
	string str2 = "panther";	// �ʱ�ȭ�� string ��ü�� �����Ѵ�.

	cout << "����̰��� ������ �� ���� �Է��Ͻÿ�: ";
	cin >> charr1;
	cout << "����̰��� �� �ٸ� ���� �� ���� �Է��Ͻÿ�: ";
	cin >> str1;
	cout << "�Ʒ� �������� ��� ����̰� �Դϴ�:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2
		<< endl;
	cout << charr2 << "���� ����° ����:"
		<< charr2[2] << endl;
	cout << str2 << "���� ����° ����: "
		<< str2[2] << endl;

	cin.get();
	cin.get();
	return 0;

}