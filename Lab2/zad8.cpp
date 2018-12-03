#include <iostream>
#include <string>

char *znajdz(char *_s, char c)
{
    int i = 0;
    bool flag = false;
    while (_s[i])
    {
        if (_s[i] == c)
        {
            if (flag == false)
            {
                flag = true;
            }
            else
            {
                return &_s[i];
            }
        }
        ++i;
    }
    return NULL;
}

int main()
{
    char c[2];
    char s[10];
    std::cin >> c;
    std::cin >> s;
    char *a = znajdz(s, c[0]);
    std::cout << a << '\n';


    return 0;
}