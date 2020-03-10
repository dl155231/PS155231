#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
	if (m == 0) {
		return n;
	}
	if (n >= m) {
		return n - m + foo(n - 1, m) + foo(n, m - 1);
	}
	return foo(m, n);
}

int main() {
	int n, m;
	scanf("%i %i", &n, &m);
	printf("%i \n", foo(n, m));
	return 0;
}
