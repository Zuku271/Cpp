#include "Lista.h"

Lista::Lista(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
	: imie(_imie), nazwisko(_nazwisko), wiek(_wiek), nextElement(nullptr)
{

}

void Lista::addElement(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
{
	Lista *tmp = this->nextElement;
	while (tmp->nextElement != nullptr)
		tmp = tmp->nextElement;
	tmp->nextElement = new Lista(_imie, _nazwisko, _wiek);


	//nextElement = std::make_shared<Lista>(_imie, _nazwisko, _wiek);
	//nextElement->nextElement = nullptr;
}