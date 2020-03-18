#include <stdio.h>
#include <stdlib.h>

void* rezerwuj(int n) {
	return malloc(sizeof(int) * n);
}
int main() {
	int n = 10;
	printf("%p", rezerwuj(n));
}
