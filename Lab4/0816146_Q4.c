#include <stdio.h>

int main() {
	char c;
	int n;

	printf("Choose B, O, or H: ");
	scanf("%c", &c);

	printf("Input the decimal number: ");
	scanf("%d", &n);

	if (c ^= 'B') {
		printf(c&1
			? "The octal expression of the number is %o\n"
			: "The hexadecimal expression of the number is %X\n", n);
	} else {
		printf("The binary expression of the number is ");

		for (c=10; c; c--)
			if (n & (1<<c))
				break;

		do putchar(n & (1<<c) ? '1' : '0');
		while (c --> 0);
		
		puts("");
	}
	return 0;
}
