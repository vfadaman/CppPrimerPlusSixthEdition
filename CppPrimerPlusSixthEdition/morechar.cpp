// morechar.cpp -- char���� int���� ��
#include "stdafx.h"
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M';	// M�� �ش��ϴ� ASCII �ڵ带 char�� ���� ch�� ����
	int i = ch;		// ���� �ڵ带  int �� ����i�� ����
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	cout << "�� ���� �ڵ忡 1�� ���� ���ڽ��ϴ�." << endl;
	ch = ch + 1;	//ch�� �ִ� ���� �ڵ带 �����Ѵ�.
	i = ch;			// i�� ���ο� ���� �ڵ带 �����Ѵ�.
	cout << ch << "�� ASCII �ڵ�� " << i << "�Դϴ�." << endl;

	// cout.put()��� �Լ��� ����Ͽ� char�� ���� ch�� ����Ѵ�.
	cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ���: ";
	cout.put(ch);

	// cout.put()�� ����Ͽ� ���� ����� ����Ѵ�.
	cout.put('!');

	cout << endl << "����" << endl;
	cin.get();
	return 0;
}