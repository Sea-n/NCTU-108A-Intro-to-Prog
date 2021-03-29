#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	printf("Input = ");
	scanf("%c", &c);
	if (isupper(c))
		printf("Output = %c\n", c+0x20);
	else if (islower(c))
		printf("Output = %c\n", c-0x20);
	else
		puts("Your input is not an English character!");
}
