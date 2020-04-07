#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m;
  int wynik=1;
	scanf("%i", &n);
	scanf("%i", &m);
	for (int i = n; i <= m; i++) {
		wynik *= i;
	}
	printf("%i", wynik);
}
