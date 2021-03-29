#include <stdio.h>
#include <string.h>

int main() {
	char a[264], b[264];
	fgets(a, 260, stdin);
	fgets(b, 260, stdin);

	a[strlen(a)-1] = b[strlen(b)-1] = 0;

	printf("%lu\n", strlen(a));
	printf("%lu\n", strlen(b));

	strcat(a, b);
	printf("%s\n", a);
	printf("%lu\n", strlen(a));

	return 0;
}
