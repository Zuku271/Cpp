#include <iostream>
#include <string>

int main()
{
    int *tmp = new int;

    std::cout << "Podaj wartosc:" << '\n';
    std::cin >> *tmp;

    std::cout << "Wpisana liczba to: " << *tmp << '\n';
    delete tmp;
    return 0;
}