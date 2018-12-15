#pragma once
#include <iostream>
#include <string>

class Lista
{
public:
	std::string imie;
	std::string nazwisko;
	unsigned int wiek;

private:
	Lista *nextElement;

public:
	Lista(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek);
	~Lista();
	void addElement(const std::string &_imie, const std::string &_nazwisko, unsigned int _wiek);
	const Lista &show(unsigned int n) const;
	void showAll() const;
	bool drop(unsigned int n);

};