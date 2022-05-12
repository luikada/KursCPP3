// zadaznie 1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	if ((a > b) && (a > c))
	{
		std::cout << "najwieksza jest " << a<< std::endl;

	}
	else if ((b > a) && (b > c))
	{
		std::cout << "najwieksza jest " << b << std::endl;

	}
	else if ((c > a) && (c > b))
	{
		std::cout << "najwieksza jest " << c << std::endl;

	}
	else 
	{
		std::cout << "nie ma najwiekszej liczby";

	}

	int l = 0;
	std::cin >> l;
	std::cout << (l > 5) ? 0 : 1; // condition expression true or false

}

