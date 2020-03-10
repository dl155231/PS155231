#include <cstdio>
#include <cstdlib>

static int wynik = 0;
int foo() {
	int n;
	printf("Podaj liczbe: ");
	scanf("%i", &n);
	wynik += n;
	printf("Suma: %i\n", wynik);
	return n;
}

int main() {
	printf("liczba %d \n", foo());
	printf("liczba %d \n", foo());
	printf("liczba %d \n", foo());
	return 0;
}
