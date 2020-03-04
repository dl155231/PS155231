#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, k;
	scanf("%i", &n);
	scanf("%i", &m);
	scanf("%i", &k);
	int i = m + 1;
	while (i < k) {
		if (i%n == 0) printf("%i\n",i); 
		i++;
	}
}
