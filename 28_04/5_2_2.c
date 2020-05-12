#include <stdio.h>
#include <stdlib.h>

void dlugosc(char napis[])
{
    int i = 0;
    while (napis[i] != 0)
    {
        i++;
    }
    printf("%i\n", i);
}

void wdlugosc(wchar_t napis[])
{
    int i = 0;
    while (napis[i] != 0)
    {
        i++;
    }
    printf("%i\n", i);
}

int main()
{
    char wyraz[10] = "awdhb";
    wchar_t wyraz2[] = L"jd2mgd";
    dlugosc(wyraz);
    wdlugosc(wyraz2);
}
