#include <iostream>
#include "Lista.h"

int main()
{
	std::string imie;
	std::string nazwisko;
	unsigned int wiek;

	std::cin >> imie >> nazwisko >> wiek;

	Lista lista(imie, nazwisko, wiek);

	std::cout << lista.imie << " " << lista.nazwisko << " " << lista.wiek << '\n';

	system("PAUSE");
	return 0;
}