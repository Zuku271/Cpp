#include <iostream>
#include <string>

struct Wiz
{
    int x;
    char k[10];
};

int main()
{
    struct Wiz zmienna_Wiz;
    auto p_zmienna_Wiz = & zmienna_Wiz;
    std::cin >> zmienna_Wiz.x;
    
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Podaj " << i << "- liczbe" << '\n';
        std::cin >> p_zmienna_Wiz->k[i];
    }

    for (char t : p_zmienna_Wiz->k)
    {
        std::cout << t << '\n';
    }

    return 0;
}