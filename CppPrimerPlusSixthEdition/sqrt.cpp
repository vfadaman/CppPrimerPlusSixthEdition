// sqrt.cpp -- sqrt() �Լ��� ����Ѵ�.
#include "stdafx.h"
#include <iostream>
#include <cmath> // �Ǵ� math.h

int main()
{
	using namespace std;

	double area;
	cout << "���� ������ �����Ʈ ������ �Է��Ͻÿ�: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "�簢�� ������ �� ���� " << side
		<< " ��Ʈ�� ��� �մϴ�." << endl;
	cout << "�����׿�!" << endl;
	cin.get();
	cin.get();
	return 0;

}