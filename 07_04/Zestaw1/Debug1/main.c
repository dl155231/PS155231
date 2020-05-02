#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {1, -1, 5, 5, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=4); //b=
    int c = b+2; // b=  , c=
    int d = (b/=-6) ^ (c-=-17); // b=  , c=  , d=
    int e = (wsk+=-1)[2]; // b=  , c=  , d=  , e=
    e = (d *= 8) + (c /= 3); // b=  , c=  , d=  , e=
    c = d - (b+=8); // b=  , c=  , d=  , e=
    b = *wsk + e; // b=  , c=  , d=  , e=
    d = b * c / e; // b=  , c=  , d=  , e=
    return 0;
}
