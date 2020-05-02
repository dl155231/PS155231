#include <stdlib.h>
#include <stdio.h>

int foo(unsigned int n, int *tab1, int *tab2)
{
    int max1 = 0, index1 = 0, max2 = 0, index2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] > max1)
        {
            max1 = tab1[i];
            index1 = i;
        }
        if (tab2[i] > max2)
        {
            max2 = tab2[i];
            index2 = i;
        }
    }
    if (index1 == index2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 5;
    int tab1[5] = {5, 2, 9, 4, 5};
    int tab2[5] = {5, 4, 9, 2, 1};
    printf("%i", foo(n, tab1, tab2));
    return 0;
}
