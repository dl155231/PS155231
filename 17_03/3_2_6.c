#include <stdio.h>
#include <stdlib.h>

void przypisz(int n, int *w) {
	*w = n;
}
int main() {
	int n = 16;
	int w = 0;
	przypisz(n, &w);
	printf("%i", w);
}
