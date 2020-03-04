#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	scanf("%i %i", &n, &m);
	int pom;
	while (m != 0) {
		pom = m;
		m = n % m;
		n = pom;
	}
	printf("%i", n);
}
