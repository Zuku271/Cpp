#include "Lista.h"

Lista::Lista(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
	: imie(_imie), nazwisko(_nazwisko), wiek(_wiek), nextElement(nullptr)
{

}

void Lista::addElement(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek)
{
	if (this->nextElement == nullptr)
	{
		this->nextElement = new Lista(_imie, _nazwisko, _wiek);
	}
	else
	{
		Lista *tmp = this->nextElement;
		while (tmp->nextElement != nullptr)
			tmp = tmp->nextElement;
		tmp->nextElement = new Lista(_imie, _nazwisko, _wiek);
	}

	//nextElement = std::make_shared<Lista>(_imie, _nazwisko, _wiek);
	//nextElement->nextElement = nullptr;
}

const Lista & Lista::show(unsigned int n)
{
	if (this->nextElement == nullptr)
		return *this;

	Lista *tmp = this->nextElement;
	for (unsigned int i = 0; i < n; ++i)
	{
		if (tmp->nextElement == nullptr)
			break;
		tmp = tmp->nextElement;
	}
		
	return *tmp;
}

Lista::~Lista()
{
	if (this->nextElement == nullptr)
	{
		delete this;
	}
	Lista *tmp = this->nextElement;
	while (tmp->nextElement != nullptr)
		tmp = tmp->nextElement;
}