// strtype2.cpp -- ����, �߰�, ÷��
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string s1 = "penguin";
	string s2, s3;

	cout << "string ��ü�� string ��ü�� ������ �� �ִ�: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "string ��ü�� C��Ÿ�� ���ڿ��� ������ �� �ִ�.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "busszrd";
	cout << "s2: " << s2 << endl;
	cout << "string ��ü���� ������ �� �ִ�: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "string ��ü���� �߰��� �� �ִ�.\n";
	s1 += s2;
	cout << "s1 += s2 --> s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" --> s = " << s2 << endl;

	cin.get();
	return 0;
}