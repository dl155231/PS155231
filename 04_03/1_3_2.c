#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    
    scanf("%i", &a);
    scanf("%i", &b);
    
    if (a>b)
        printf("%i", a);
    else
        printf("%i", b);

}
