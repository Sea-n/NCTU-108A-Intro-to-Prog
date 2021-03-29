#include <stdio.h>
	
char n[123456];

int main() {
	printf("Enter your filename: ");
	scanf("%s", n);
	
	FILE *f = fopen(n, "rb");
	if (!f) return
		printf("Could not open file");

	puts("");
	while (!feof(f))
		fread(n, 1, 1, f) && printf("%c", *n);

	return 0;
}
