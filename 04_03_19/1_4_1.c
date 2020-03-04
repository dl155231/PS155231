#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m;
	scanf("%i %i", &n, &m);
	for (int i = n; i < m; i += n) {
		printf("%i\n", i);
	}
}
