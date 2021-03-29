#include <stdio.h>

int main() {
	int k;
	printf("Input: ");
	scanf("%d", &k);
	if (k & 1<<31)
		k = ~k+1;
	if (k > 1e3)
		puts("Invalid value.");
	else
		puts("Input accepted");
	return 0;
}
