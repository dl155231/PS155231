#include <stdio.h>
#include <stdlib.h>

int main()
{

    //1_2_1
    printf("Hello World\n");

    //1_2_2
    printf("Bardzo\ndlugi\nnapis\n");

    //1_2_3
    printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ $ \& \% \n");

    //1_2_4
    int n;
    scanf("%i", &n);
    printf("%i", n);

    //1_2_5
    float n;
    scanf("%f", &n);
    printf("%f", n);

    //1_2_6
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("%i\n%i\n%i\n", n1, n2, n3);

    //1_2_7
    int n;
    scanf("%i", &n);
    printf("%i", n + 1);

    //1_2_8
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);
    printf("%f", (float)(n1 + n2 + n3) / 3);

    //1_2_9
    float x;
    scanf("%f", &x);
    printf("%f", sqrt(x));

    //1_2_10
    float x;
    scanf("%f", &x);
    printf("%f", fabs(x));

    //1_2_11
    float x;
    scanf("%f", &x);
    printf("%.2f", x);

    //1_2_12
    float x = 0;
    scanf("%f", &x);
    printf("%.2e", x);

    //1_3_1
    int n;
    scanf("%i", &n);
    if (n < 0)
        printf("%i", -n);
    else
        printf("%i", n);

    //1_3_2
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    if (a>b)
        printf("%i", a);
    else
        printf("%i", b);

    //1_3_3
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    if (a >= b && a >= c)
        printf("%i", a);
    else if (b >= a && b >= c)
        printf("%i", b);
    else
        printf("%i", c);

   return 0;
}
