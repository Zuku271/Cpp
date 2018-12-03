#include <iostream>
#include <string>

struct Wiz
{
    int x;
    char k[10];
};

int main()
{
    struct Wiz *struktura = new struct Wiz;
    std::cout << "Podaj wartosc x:" << '\n';
    std::cin >> struktura->x;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Podaj " << i << "- liczbe" << '\n';
        std::cin >> struktura->k[i];
    }
    std::cout << '\n';

    for (char t : struktura->k)
    {
        std::cout << t << '\n';
    }

    delete struktura;

    return 0;
}