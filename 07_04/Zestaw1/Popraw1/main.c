#include <stdio.h>
#include <stdlib.h>

int funkcja(int m)
{
    return n+m;
}

int main()
{
    int a=4;int b=5;
    int c=5,d=6;
    funkcja(&c,&d);
    funkcja(a,b);
    return 0;
}
