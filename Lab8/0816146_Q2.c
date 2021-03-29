#include <stdio.h>

int main() {
	int a[] = {'a', 'b', 'c', 'd', 'e'};
	printf("%d\n", (int)a);
	printf("%d\n", (int)a[0]);
	printf("%d\n", (int)&(a[0]));
	printf("%d\n", (int)*a);
	printf("%d\n", (int)*(a+1));
	printf("%d\n", (int)&*(a+1));
	printf("%d\n", (int)*&*(a+1));
	printf("%d\n", (int)&*&*(a+1));
}
