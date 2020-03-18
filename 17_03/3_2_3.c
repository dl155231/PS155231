#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 1, b = 2;
	zamiana(&a, &b);
	printf("%i %i", a, b);
	return 0;
}
