#include <stdio.h>
#include <stdlib.h>

static int licznik = 0;
void wywolania() {
	licznik++;
	printf("Wywolania: %i\n", licznik);
}

int main() {
	int n = 1;
	while (n == 1) {
		wywolania();
		scanf("%i", &n);
	}
}
