#include <stdio.h>

int main() {
	int i, j;
	scanf("%d", &i);
	while (i --> 0) {
		scanf("%d", &j);
		j += j>>1;
		printf("%d\n", j);
	}
	return 0;
}
