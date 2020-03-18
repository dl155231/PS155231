#include <stdio.h>
#include <stdlib.h>

void przepisz(const int *a, int * const b) {
	*b = *a;
}

int main() {
	int a = 1, b = 10;
	printf("Przed: %i %i\n", a, b);
	przepisz(&a, &b);
	printf("Po: %i %i\n", a, b);
}
