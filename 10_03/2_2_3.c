#include <stdio.h>
#include <stdlib.h>

int najwDziel(int n) {
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (!(n%i)) {
			k = i;
		}
	}
	return k;
}

int main() {
	int n;
	scanf("%i", &n);
	printf("%i", najwDziel(n));

}
