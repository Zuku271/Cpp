#include <iostream>
#include <string>



int main()
{
    int *(tab[10]);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Podaj " << i << "- liczbe" << '\n';
        tab[i] = new int;
        std::cin >> *(tab[i]);
    }

    std::cout << '\n';
    for (int *t : tab)
    {
        std::cout << *t << '\n';
    }
    for (int i = 0; i < 10; ++i)
    {
        delete tab[i];
    }
    return 0;
}