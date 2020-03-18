#include <stdio.h>
#include <stdlib.h>

int* wskaznik(int *x, int *y) {
	if (*x < *y) {
		return x;
	}
	else {
		return y;
	}
}
int main() {
	int a = 10, b = 15;
	printf("%p", wskaznik(&a, &b));
	return 0;
}
