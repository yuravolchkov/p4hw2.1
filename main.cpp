#include <iostream>
#include "Fib_func.h"

int main() 
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����
	int n;
	std::cout << "������� ����� ������������ ����: ";
	std::cin >> n;
	// ���������� ����� ����������� �������
		std::cout << "\n����� ��������� ����� ����������� �������: "; 
		for (int i = 0; i < n; i++) 
		{
			std::cout << fibanachi(i) << " ";
		}
	return 0;
}