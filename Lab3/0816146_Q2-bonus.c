#include <stdio.h>

int main() {
	printf("Input = ");
	printf("Output = %c\n", getchar()^0x20);
}
