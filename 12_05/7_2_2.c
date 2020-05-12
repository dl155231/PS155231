// .2 .5 .6 .8 .11 .15 .18
#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a;
    float b;
    float c;
};

void przepisz(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 = troj1;
}
int main()
{
    struct trojkat tmp = {2, 4, 3};
    struct trojkat tmp2 = {0, 0, 0};
    przepisz(tmp, &tmp2);
    printf("%f %f %f", tmp2.a, tmp2.b, tmp2.c);
}
