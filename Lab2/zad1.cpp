#include <iostream>
#include <string>

int main()
{
    int zmienna = 0;
    int *p_zmienna = &zmienna;

    std::cin >> zmienna;
    std::cout << zmienna << '\n';
    std::cout << *p_zmienna << '\n';

    return 0;
}