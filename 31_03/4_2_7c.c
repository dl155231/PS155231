#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    for (int i = 0; i < n; i++)
    {
        int pom1 = tab1[i];
        int pom2 = tab2[i];
        int pom3 = tab3[i];
        tab1[i] = pom2;
        tab2[i] = pom3;
        tab3[i] = pom1;
    }
}

void wypisz(int n, int tab[])
{
    for (int i = 0; i < n; i++)
        printf("%i\t", tab[i]);
    printf("\n");
}

int main()
{
    int n = 5;

    int tab1[5] = {1, 3, 5, 7, 9};
    int tab2[5] = {6, 2, 8, 0, 8};
    int tab3[5] = {0, 5, 2, 3, 11};

    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    printf("\n");
    foo(n, tab1, tab2, tab3);

    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    return 0;
}
