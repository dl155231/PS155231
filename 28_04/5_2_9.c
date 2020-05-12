#include <stdio.h>
#include <stdlib.h>

void wytnij(char wyraz[], int n, int m)
{
    if (n > m)
        printf("blad: n>m\n\n");
    else
    {
        char nowy[20] = {};
        for (int i = n; i <= m; i++)
            nowy[i - n] = wyraz[i];
        printf("%s\n", nowy);
    }
}
void wytnij_wchar(wchar_t wyraz[], int n, int m)
{
    if (n > m)
        printf("blad: n>m\n");
    else
    {
        char nowy[20] = {};

        for (int i = n; i <= m; i++)
            nowy[i - n] = wyraz[i];
        printf("%s\n", nowy);
    }
}

int main()
{
    char wyraz[30] = "stokrotka";
    int n = 2;
    int m = 5;
    wytnij(wyraz, n, m);
    wchar_t wyraz1[] = L"stokrotka";
    wytnij_wchar(wyraz1, n, m);
}
