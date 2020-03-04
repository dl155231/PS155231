#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;
	scanf("%i", &a);
	scanf("%i", &b);
	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}
	if (a > b) {
		printf("%i", a);
	}
	else {
		printf("%i", b);
	}
 }
