#include <cstdio>
#include <cstdlib> 


//nie wiem jak rozdzielić algorytm wyliczania sumy na dwie funkcje, więc jest w jednej
int suma(int n) {
	int wynik = 0;
	for (int i = 1; i <= n; i++) {
		wynik += sqrt(i);
	}
	return wynik;
}

int main() {
	int n;
	scanf("%i", &n);
	printf("%i", suma(n));
}
