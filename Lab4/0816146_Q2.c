#include <stdio.h>

int main() {
	int a, g, l, r;
	a = rand() % 100;
	l = 0, r = 99;

	for (;;) {
		printf("Guess: ");
		scanf("%d", &g);

		if (g == a) {
			printf("You got it!\n");
			return 0;
		}

		if (g > a && g > r) printf("Out of range.\n");
		if (g > a && g < r) r = g;
		if (g < a && g < l) printf("Out of range.\n");
		if (g < a && g > l) l = g;
		printf("Range: %d - %d\n", l, r);
	}
	return 0;
}
