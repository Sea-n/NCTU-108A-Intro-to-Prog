#include <stdio.h>

char n[123456];

int open(char *n);

int main() {
	printf("Enter your filename: ");
	scanf("%s", n);

	if (open(n))
		return printf("Could not open file");

	return 0;
}

int open(char *n) {
	FILE *f = fopen(n, "rb");
	if (!f) return 87;

	puts("");
	while (!feof(f))
		fread(n, 1, 1, f) && printf("%c", *n);

	return 0;
}
