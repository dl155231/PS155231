#include <stdio.h>
#include <stdlib.h>
int main() {
  float a, b, c, d, e, f;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);
	scanf("%f", &f);
	float w = a * e - b * d;
	float wx = c * e - b * f;
	float wy = a * f - c * d;
	if (w == 0) {
		if (wx == 0 && wy == 0) {
			printf("Nieskoczenie wiele rozwiazan");
		}
		else {
			printf("Brak rozwiazan");
		}
	}
	else {
		printf("1 rozw: x=%f, y=%f", wx / w, wy / w);
	}
  }
