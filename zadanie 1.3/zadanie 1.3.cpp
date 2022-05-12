//SprawdŸ, czy wartoœæ zmiennej pobranej od u¿ytkownika jest wiêksza, mniejsza, czy równa zero(wypisz na ekranie odpowiedni komunikat).

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

