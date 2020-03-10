#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
	if (n <= 1) {
		return 1;
	}
	else
		return fibonacci(n - 1) + fibonacci(n - 2);;
}
int main()
{
	int n = 0;
	scanf("%i", &n);
	printf("%i",fibonacci(n));
	return 0;
}
