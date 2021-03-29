#include <stdio.h>

int main() {
	int x;
	printf("Input the number of students: ");
	scanf("%d", &x);
	for (int i=1; i<=x; i++)
		printf("%d!\n", i);
	return 0;
}
