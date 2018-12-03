#include <iostream>
#include <string>

struct Wiz
{
    int x;
    char k[10];
};

int main()
{
    struct Wiz *(tab[10]);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Podaj " << i << " wiz" << '\n';
        tab[i] = new struct Wiz;
        std::cin >> (tab[i])->x;
        std::cin >> (tab[i])->k;
    }

    std::cout << '\n';
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Wiz" << i << '\n';
        std::cout << tab[i]->x << '\n';
        std::cout << tab[i]->k << '\n';

    }
    for (int i = 0; i < 10; ++i)
    {
        delete tab[i];
    }
    return 0;
}