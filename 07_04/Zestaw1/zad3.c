#include <stdlib.h>
#include <stdio.h>

void maks3(int *a, int *b)
{
    if (&a >= &b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
}

int main()
{
    int a = 1;
    int b = 2;
    maks3(&a, &b);
    printf("%i %i", a, b);
    return 0;
}
