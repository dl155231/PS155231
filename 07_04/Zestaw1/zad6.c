#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[7] = {-15, -5, -3, 0, 9, 15, 33};
    int wynik = 0;
    for (int i = 0; i < 7; i++)
    {
        if (!(tab[i] % 3) && !(tab[i] % 5))
        {
            wynik++;
        }
    }
    printf("%i", wynik);
    return 0;
}
