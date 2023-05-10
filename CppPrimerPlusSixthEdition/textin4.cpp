// textin4.cpp -- cin.get()으로 문자 읽기

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF) // 파일 끝 검사
	{
		cout.put(char(ch));
		++count;
	}
	cout << count << " 문자를 읽었습니다.\n";

	cin.get();
	return 0;
}