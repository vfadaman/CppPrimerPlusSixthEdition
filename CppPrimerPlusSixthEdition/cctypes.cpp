// cctypes.cpp -- ctype.h 라이브러리 사용

#include "stdafx.h"
#include <iostream>
#include <cctype>

int main()
{
	using namespace std;

	cout << "분석할 텍스트를 입력하십시오. "
		"입력의 끝을 @로 표시하십시오. \n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);		// 첫 문자를 입력받는다.
	while (ch != '@')	// 종료 문자인지 검사한다.
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))	// 구두점인가?
			punct++;
		else
			others++;

		cin.get(ch);		// 다음 문자를 입력받는다.
	}

	cout << "알파벳 문자 " << chars << ", "
		<< "화이트스페이스 " << whitespace << ", "
		<< "숫자 " << digits << ", "
		<< "구두점 " << punct << ", "
		<< "기타 " << others << endl;

	cin.get();
	cin.get();
	return 0;
}