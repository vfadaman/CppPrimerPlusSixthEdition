// ifelse.cpp -- if else ����

#include "stdafx.h"
#include <iostream>

int main()
{
	char ch;

	std::cout << "Ÿ�����Ͻø�, �ݺ� �����ϰڽ��ϴ�.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;	// ���๮���϶� ����
		else
			std::cout << ++ch;	// �� ���� �����϶� ����

		std::cin.get(ch);
	}
	// ++ch��� ch+1�� ����ϸ� ��� �ɱ�?
	std::cout << "\nȥ�������� �ؼ� �˼��մϴ�.\n";
	std::cin.get();
	std::cin.get();
	return 0;
}