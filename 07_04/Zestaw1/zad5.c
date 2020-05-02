#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return foo(n - 1, m) - foo(n, m - 1) + 5;
    }
}

int main()
{
    printf("%i\n", foo(0, 1));
    printf("%i\n", foo(2, 0));
    printf("%i\n", foo(3, 3));

    return 0;
}
