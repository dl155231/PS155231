#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int *tab1[], int *tab2[], int *tab3[])
{
    int pom[3];
    for (int i = 0; i < n; i++)
    {
        pom[0] = tab1[i];
        pom[1] = tab2[i];
        pom[2] = tab3[i];
        int pom_s;
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (pom[j] < pom[k])
                {
                    pom_s = pom[j];
                    pom[j] = pom[k];
                    pom[k] = pom_s;
                }
            }
        }
        tab1[i] = pom[0];
        tab2[i] = pom[1];
        tab3[i] = pom[2];
    }
}

void wypisz(int unsigned n, int tab[])
{
    for (int i = 0; i < n; i++)
        printf("%i \t", tab[i]);
    printf("\n");
}

int main()
{
    int unsigned n = 4;
    int tab1[4] = {2, 5, 1, 2};
    int tab2[4] = {7, 1, 7, 6};
    int tab3[4] = {4, 2, 0, 9};
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    printf("\n");
    foo(n, tab1, tab2, tab3);
    printf("\n");
    wypisz(n, tab1);
    wypisz(n, tab2);
    wypisz(n, tab3);
    return 0;
}
