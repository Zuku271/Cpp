#include <iostream>
#include <string>

int *ustalLiczbeCalkowita(int tmp)
{
    int *ret = new int(tmp);
    return ret;
}

int main()
{
    int t;
    std::cout << "Podaj liczbe" << '\n';
    std::cin >> t;
    int *liczba = ustalLiczbeCalkowita(t);

    std::cout << "Podana liczba to: " << *liczba << '\n';

    return 0;
}