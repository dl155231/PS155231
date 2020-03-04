#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	float a, b, h, p;
	printf("Wybierz figure \n");
	printf("1-kwadrat\n");
	printf("2-prostokat\n");
	printf("3-trojkat\n");
	scanf("%i", &n);
	
	switch (n) {
	case 1:
		printf("Podaj dlugosc boku kwadratu: ");
		scanf("%f", &a);
		p = a * a;
		break;
	case 2:
		printf("Podaj dlugosci bokow prostokata: ");
		scanf("%f %f", &a, &b);
		p = a * b;
		break;
	case 3:
		printf("Podaj dlugosc podstawy i wysokosc trojkata: ");
		scanf("%f %f", &a, &h);
		p = (a * h) / 2;
		break;
	default:
		break;
	}
	printf("Pole wybranej figury wynosi %f", p);
}
