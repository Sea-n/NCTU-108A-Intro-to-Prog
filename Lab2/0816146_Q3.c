#include <stdio.h>

int main() {
	char c;
	printf("Input a lower case: ");
	scanf("%c", &c);
	printf("Output an upper case: %c\n", c^0x20);
	return 0;
}
