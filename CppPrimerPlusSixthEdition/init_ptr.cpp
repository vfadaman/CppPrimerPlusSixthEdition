// init_ptr.cpp -- �����͸� �ʱ�ȭ �Ѵ�

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int higgens = 5;
	int* pt = &higgens;

	cout << "higgens�� �� = " << higgens
		<< ", higgens�� �ּ� = " << &higgens << endl;
	cout << "pt�� �� = " << *pt
		<< ", pt�� �� = " << pt << endl;

	cin.get();
	return 0;
}