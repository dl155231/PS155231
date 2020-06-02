#include <stdio.h>
#include <stdlib.h>

enum zwierzak
{
    ssak = 0,
    ptak,
    gad,
    plaz,
    ryba
};

int main()
{
    enum zwierzak zwierze = ptak;
    printf("%i", zwierze);
    return 0;
}
