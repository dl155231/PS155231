#include <stdio.h>
#include <stdlib.h>
struct punkt10
{
    float tab[10];
};

void przepisz(struct punkt10 tab1[], struct punkt10 tab2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}
void wypiszStrukture(struct punkt10 punkty)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", punkty.tab[i]);
    }
    printf("\n");
}
void wypiszTabele(struct punkt10 tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        wypiszStrukture(tab[i]);
    }
    printf("-------------\n");
}
int main()
{
    struct punkt10 punkt1[] =
        {
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
    struct punkt10 punkt2[] =
        {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    przepisz(punkt1, punkt2, 5);
    wypiszTabele(punkt2, 5);
}
