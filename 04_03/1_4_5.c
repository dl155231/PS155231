#include <stdio.h>
#include <stdlib.h>
int main() {
	//1_4_5
	int n;
	scanf("%i", &n);
	int suma = 0;
	for (int i = 0; i <= n; i++) {
		suma += i * i;
	}
	printf("%i", suma);
}
