// numstr.cpp -- 수치 입력 뒤에 오는 문자열 입력
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "지금 사시는 아파트에 언제 입주하셨습니까?\n";
	int year;
	//cin >> year; // 아래처럼 해야 제대로 처리 됨.
	(cin >> year).get();
	cout << "사시는 도시를 말씀해 주시겠습니까?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "아파트 입주 연도:" << year << endl;
	cout << "도시:" << address << endl;
	cout << "등록이 완료되었습니다.!\n";
	cin.get();
	cin.get();
	return 0;
}