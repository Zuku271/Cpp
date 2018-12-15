#include <iostream>
#include <fstream>
#include "Lista.h"

int main()
{
	std::string imie = "";
	std::string nazwisko = "";
	unsigned int wiek = 0;

	std::ifstream myfile;
	myfile.open("dane.txt");
	if (!myfile.is_open())
		return 1;

	Lista lista(imie, nazwisko, wiek);
	//std::cin >> imie >> nazwisko >> wiek;
	while (!myfile.eof())
	{
		myfile >> imie;
		myfile >> nazwisko;
		myfile >> wiek;
		lista.addElement(imie, nazwisko, wiek);
	}
	
	

	//std::cout << lista.imie << " " << lista.nazwisko << " " << lista.wiek << '\n';

	//lista.addElement("A", "B", 50);
	std::cout << lista.show(4).imie << '\n';

	myfile.close();
	system("PAUSE");
	return 0;
}