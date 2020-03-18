#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *x, int *y) {
	if (*x < *y) {
		return *x;
	}
	else {
		return *y;
	}
}

int main() {
	int a = 10, b = 15;
	printf("%i", mniejsza(&a, &b));
	return 0;
}
