#include <stdio.h>
#include <stdlib.h>

int foo1(int n, int *tab)
{
    for (int i = 0; i < n; i++)
        tab[i] = 0;
    return tab;
}

int foo2(int n, int *tab)
{
    for (int i = 0; i < n; i++)
        tab[i] = i;
    return tab;
}

int foo3(int n, int *tab)
{
    for (int i = 0; i < n; i++)
        tab[i] *= 2;
    return tab;
}

int foo4(int n, int *tab)
{
    for (int i = 0; i < n; i++)
        if (tab[i] < 0)
            tab[i] *= -1;
    return tab;
}

void wypisz(int n, int tab[])
{
    for (int i = 0; i < n; i++)
        printf("%i \t", tab[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%i", &n);
    int tab[n];
    wypisz(n, foo1(n, &tab));
    wypisz(n, foo2(n, &tab));
    wypisz(n, foo3(n, &tab));
    wypisz(n, foo4(n, &tab));
    return 0;
}
