// 7.2.1	7.2.2	7.2.5	7.2.6
// 7.2.8	7.2.11	7.2.15	7.2.18
#include <stdio.h>
#include <stdlib.h>
struct trojkat
{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat tmp)
{
    float suma = tmp.a + tmp.b + tmp.c;
    return suma;
}
int main()
{
    struct trojkat tmp = {2, 4, 3};
    printf("%f", obwod(tmp));
}
