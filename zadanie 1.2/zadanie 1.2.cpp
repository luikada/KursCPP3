// zadanie 1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    int l;
    std::cin >> l;

    if (l % 2) // kiedy w warunku otrzymamy 0-> izb false, gdy otrzyma 1->ozn to true.
    { // if trafia na reszte z dzielenia 1 - to jest l. nieparzysta
        std::cout << "Liczba jest nieparzysta\n";
    }
    else
    { //analogicznie jest odwrotnie
        std::cout << "liczba jest parzysta\n";
    }
}
