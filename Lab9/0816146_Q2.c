#include <stdio.h>
#include <string.h>

int main() {
	char a[264], b[264], c[264] = {};
	fgets(a, 260, stdin);

	strcpy(b, a);
	printf("%s", b);

	strncpy(c, a, 5);
	printf("%s\n", c);

	return 0;
}
