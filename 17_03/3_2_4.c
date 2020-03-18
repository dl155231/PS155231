#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y) {
	int temp;
	if (*y < *x) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
}
int main() {
	int a = 2, b = 1;
	int x = 10, y = 20;
	zamiana(&a, &b);
	printf("%i %i\n", a, b);
	zamiana(&x, &y);
	printf("%i %i\n", x, y);
	return 0;
}
