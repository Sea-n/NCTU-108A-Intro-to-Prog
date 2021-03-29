#include <stdio.h>

void sean(int *i);

int main() {
	int a[] = {6, 0, 4};

	while (0 <-- *a) {
		scanf("%d", a+2);
		sean(a);
	}

	printf("%d\n", *(a+1));

	return 0;
}

void sean(int *i) {
	*(i+1) = (*(i+2) > *(i+1)) ? *(i+2) : *(i+1);
}
