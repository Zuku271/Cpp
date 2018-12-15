#include "Lista.h"

Lista::Lista(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
	: imie(_imie), nazwisko(_nazwisko), wiek(_wiek), nextElement(nullptr)
{

}

void Lista::addElement(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
{
	nextElement = std::make_unique<Lista>(Lista(_imie, _nazwisko, _wiek));
	//nextElement->nextElement = nullptr;
}