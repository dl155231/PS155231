#include <stdio.h>
#include <stdlib.h>

double foo(unsigned int n, double *tab1)
{
    double wynik = 0;
    double *tab2 = tab1;
    for (int i = 0; i < n; i++)
    {
        wynik += tab1[i] * tab2[i];
    }
    return wynik;
}

int main()
{
    int n = 3;
    double tab[3] = {1, 2, 3};
    printf("%.2f\n", foo(n, tab)); // -> 14.000
    return 0;
}
