#include <stdio.h>

int f(int i);

int main() {
	int a;

	scanf("%d", &a);
	printf("%d\n", f(a));

	return 0;
}

int f(int a) {
	return a > 3 ? f(a-1) + f(a-2) : (++a)>>1;
}
