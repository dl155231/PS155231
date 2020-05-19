#include <stdio.h>
#include <stdlib.h>

int **foo(int n, int m)
{
    return malloc(n * sizeof(int[m]));
}

int suma(int **tab, int n)
{
    int wynik = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            wynik += *((tab + i) + j);
        }
    }
    return wynik;
}

int main()
{
    int n = 4;
    int **tab = foo(n, 100);
    printf("%d", suma(tab, n));
    return 0;
}
