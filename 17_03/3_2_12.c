#include <stdio.h>
#include <stdlib.h>

double* rezerwuj(unsigned int n) {
	return malloc(sizeof(double) * n);
}
int main() {
	int n = 10;
	printf("%p", rezerwuj(n));
}
