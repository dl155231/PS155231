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
	zamiana(&a, &b);
	printf("%i %i", a, b);
	return 0;
}
