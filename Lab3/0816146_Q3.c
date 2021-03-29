#include <stdio.h>

#define T do { \
	printf("Input the temperature: "); \
	scanf("%lf", &t); \
} while(0)

int main() {
	char c;
	double t;
	printf("Choose C or F: ");
	scanf("%c", &c);
	switch (c) {
		case 'C':
			T;
			printf("Fahrenheit temperature is %.2f degree.\n", t*1.8 + 32);
			break;
		case 'F':
			T;
			printf("Fahrenheit temperature is %.2f degree.\n", (t-32) / 1.8);
			break;
	}
	return 0;
}
