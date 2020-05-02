#include <stdio.h>
#include <stdlib.h>
double foo1(int n, int *tab)
{
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += tab[i];
    }

    return suma / n;
}

int foo2(int n, int *tab)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += tab[i];
    }
    return suma;
}

int foo3(int n, int *tab)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += tab[i] * tab[i];
    }
    return suma;
}

int main()
{
    int n = 5;
    int tab[5] = {1, 2, 3, 4, 7};
    printf("Srednia aryt.: %.2f\n", foo1(n, tab));
    printf("Suma elementow: %d\n", foo2(n, tab));
    printf("Suma kwadratow elementow: %d\n", foo3(n, tab));
    return 0;
}
