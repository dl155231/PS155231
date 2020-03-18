#include <stdio.h>
#include <stdlib.h>

int* rezerwuj() {
	return malloc(sizeof(int));
}
int main() {
	printf("%p", rezerwuj());
	return 0;
}
