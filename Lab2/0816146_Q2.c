#include <stdio.h>

int main() {
	char c[2];
	printf("Input two characters: ");
	scanf("%c %c", c, c+1);
	for (int i=0; ~i&2; i++)
		printf("'%1$c': %1$d\n", i[c]);
	return 0;
}
