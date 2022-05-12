// KursCPP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
	std::string str_1 = "hihi";
	std::string str_2 = "haha";

	std::string str_3 = str_1 + " " + str_2;
	str_3[6] = 'w';

	std::cout << str_3;
	
	

}

