// hexoct1.cpp -- 16진 정수형 상수와 8진 정수형 상수를 보여준다.
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int chest = 42;
	int waist = 0x42;//66
	int inseam = 042;//34

	cout << "손님 몸매는 한마디로 끝내줍니다!\n";
	cout << "가슴둘레 " << chest << "\n";
	cout << "허리둘레 " << waist << "\n";
	cout << "인심길이 " << inseam << "\n";
	cin.get();
	return 0;
}