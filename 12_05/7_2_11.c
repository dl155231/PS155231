#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    float x;
    int y;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane tmp;
    printf("Wpisz 0 dla liczby wymiernej lub 1 dla liczby calkowitej: ");
    scanf("%i", &tmp.tp);
    if (tmp.tp == 0)
    {
        printf("Wpisz liczbe wymierna: ");
        scanf("%f", &tmp.zaw.x);
    }

    if (tmp.tp == 1)
    {
        printf("Wpisz liczbe calkowita: ");
        scanf("%i", &tmp.zaw.y);
    }
    return tmp;
};

void wyswietl(struct Dane test)
{
    if (test.tp == 0)
    {
        printf("%f\n", test.zaw.x);
    }
    else
    {
        printf("%i\n", test.zaw.y);
    }
}

int main()
{
    struct Dane liczba1 = wczytaj();
    wyswietl(liczba1);
}
