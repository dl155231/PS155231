#include <stdlib.h>
#include <stdio.h>

double foo(unsigned int n)
{
    double wynik = 1;
    for (int i = n; i > 0; i--)
    {
        wynik*=3;
    }
    return 1/wynik;
}

int main()
{
    printf("%f",foo(3));
    return 0;
}
