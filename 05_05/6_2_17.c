#include <stdio.h>
#include <stdlib.h>

int **foo(int n, int m)
{
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        *(tab + i) = malloc(m * sizeof(int[m]));
    return tab;
}

double srednia(int **tab, int n, int m)
{
    double srednia = 0, tmp = 0;
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tmp += *(*(tab + i) + j);
        }
        tmp /= n;
        if (tmp > srednia)
        {
            srednia = tmp;
        }
        tmp = 0;
    }
    return srednia;
}

int main()
{
    int n = 10, m = 10;
    int **tab = foo(n, m);
    printf("%0.2f", srednia(tab, n, m));
    return 0;
}
