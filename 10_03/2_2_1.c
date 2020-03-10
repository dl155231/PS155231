#include <cstdio>
#include <cstdlib> 
int wartBez(int n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

int main() {
	int n;
	scanf("%i", &n);
	printf("%i", wartBez(n));
  return 0;
}
