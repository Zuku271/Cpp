#include <vector>
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

const Lista & Lista::show(unsigned int n) const
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

void Lista::showAll() const
{
	if (this->nextElement == nullptr)
		return;

	Lista *tmp = this->nextElement;
	while (tmp->nextElement != nullptr)
	{
		std::cout << tmp->imie << " " << tmp->nazwisko << " " << tmp->wiek << '\n';
		tmp = tmp->nextElement;
	}
	std::cout << tmp->imie << " " << tmp->nazwisko << " " << tmp->wiek << '\n';
}

bool Lista::drop(unsigned int n)
{
	if (this->nextElement == nullptr)
		return false;

	Lista *tmp = this;
	for (unsigned int i = 1; i < n + 1; ++i)
	{
		if (tmp->nextElement == nullptr && i != n + 1)
		{
			return false;
		}
		
		Lista *prev = tmp;
		tmp = tmp->nextElement;
		if (i == n)
		{
			prev->nextElement = tmp->nextElement;
			delete tmp;
			
			return true;
		}
	}
	return false;
}

Lista::~Lista()
{
	if (this->nextElement == nullptr)
	{
		delete this;
		return;
	}

	Lista *prev = this;
	Lista *tmp = this->nextElement;
	while (tmp->nextElement != nullptr)
	{
		Lista *prev = tmp;
		tmp = tmp->nextElement;
		if (tmp->nextElement != nullptr)
			prev->nextElement = tmp->nextElement;
		delete tmp;
	}

}