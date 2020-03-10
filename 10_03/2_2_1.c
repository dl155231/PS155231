#include <stdio.h>
#include <stdlib.h>
int wartBez(int n) {
	if (n < 0) {
		return -n;
	} else {
	 return n;
	}
}

int main() {
	int n;
	scanf("%i", &n);
	printf("%i", wartBez(n));
  return 0;
}
