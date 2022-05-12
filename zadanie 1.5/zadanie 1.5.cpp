// zadanie 1.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


bool Palindrom(std::string str)
{
    int dl = str.size();

    for (int i = 0; i < dl / 2; i++)
    {
        if (str[i] != str[dl - i - 1])
        {
            return false;
        }
    }

    return true;
}

bool Palindrom2(std::string word)
{
    int i = 0;
    int j = word.size() - 1;    for (; i < j; i++, j--)
    {
        if (word[i] != word[j])
            return false;
    }
    return true;
}
int main()
{
    std::cout << std::boolalpha << Palindrom2("ADA") << std::endl;

    std::cout << "podaj wyraz ";
    std::string wyraz{};
    std::getline(std::cin >> std::ws, wyraz);

    std::cout << Palindrom(wyraz) << std::endl;

}

