#include <stdio.h>
#include <stdlib.h>

int *foo(int n, int m)
{
    return malloc(n * sizeof(int[m]));
}

int *odwroc(int *tab, int n, int m)
{
    int *wynik = foo(n, m), x;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            x = *(wynik + (n - i)) + (m - j);
            x = *(tab + i) + j;
        }
    }
    return wynik;
}

int main()
{
    int n = 5, m = 5;
    int *tab = foo(n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("[%d %d] = %d\n", i, j, *(tab + i) + j);
        }
    }
    printf("================\n");
    tab = odwroc(tab, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("[%d, %d] = %d\n", i, j, *(tab + i) + j);
        }
    }
    return 0;
}
