//Sprawd�, czy warto�� zmiennej pobranej od u�ytkownika jest wi�ksza, mniejsza, czy r�wna zero(wypisz na ekranie odpowiedni komunikat).

#include <iostream>

int main()
{
    int a = 0;

    std::cout << "podaj liczbe\n";
    std::cin >> a;

    if (a > 0)
    {
        std::cout << "liczba jest wieksza od 0\n";

    }
    else if (a < 0)
    {
        std::cout << "liczba jest mnniejsza od 0\n";

    }
    else 
    {
        std::cout << "liczba jest rowna 0\n";

    }
}

