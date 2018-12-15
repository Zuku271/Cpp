#include <iostream>
#include <string>

struct Student
{
    char kierunek[50];
    unsigned int rok_studiow;
    unsigned int *wynik_egzaminu;

    Student (char *_kierunek, unsigned int _rok_studiow, unsigned int *_wynik_egzaminu, unsigned int liczba_egz)
        : rok_studiow(_rok_studiow)
    {
        for (unsigned int i = 0; i < 50; ++i)
        {
            if (_kierunek[i] != '0')
                kierunek[i] = _kierunek[i];
            else
                kierunek[i] = '0';
        }

        wynik_egzaminu = new unsigned int[liczba_egz];
        for (unsigned int i = 0; i < liczba_egz; ++i)
        {           
            wynik_egzaminu[i] = _wynik_egzaminu[i];
        }
    }
    ~Student()
    {
        delete[] wynik_egzaminu;
    }
};

int main()
{
    unsigned int liczba_studentow;
    std::cout << "Podaj liczbe studentow:" << '\n';
    std::cin >> liczba_studentow;

    struct Student *(tab_studentow[liczba_studentow]);
    

    for (unsigned int i = 0; i < liczba_studentow; ++i)
    {
        char kierunek[50];
        unsigned int rok_studiow;
        unsigned int liczba_egz;

        std::cout << "Podaj dane " << i << "-tego studenta [kierunek    |   rok    |   wynik]" << '\n';
        std::cin >> kierunek >> rok_studiow >> liczba_egz;
        unsigned int *wynik_egzaminu = new unsigned int[liczba_egz];

        std::cout << "Podaj wyniki egzaminow:" << '\n';
        for (unsigned int j = 0; j < liczba_egz; ++j)
        {
            std::cin >> wynik_egzaminu[j];
        }


        tab_studentow[i] = new struct Student(kierunek, rok_studiow, wynik_egzaminu, liczba_egz);
        delete[] wynik_egzaminu;

    }

    std::cout << "Student 0: " << '\n';
    std::cout << "\t" << tab_studentow[0]->kierunek << '\n';
    std::cout << "\t" << tab_studentow[0]->rok_studiow << '\n';
    std::cout << "\t" << (tab_studentow[0]->wynik_egzaminu[0]) << '\n';




    return 0;
}