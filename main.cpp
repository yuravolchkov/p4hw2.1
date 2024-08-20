#include <iostream>
#include "Fib_func.h"

int main() 
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран
	int n;
	std::cout << "Введите число отображаемых цифр: ";
	std::cin >> n;
	// реализация через рекурсивную функцию
		std::cout << "\nЧисла Фибоначчи через рекурсивную функцию: "; 
		for (int i = 0; i < n; i++) 
		{
			std::cout << fibanachi(i) << " ";
		}
	return 0;
}