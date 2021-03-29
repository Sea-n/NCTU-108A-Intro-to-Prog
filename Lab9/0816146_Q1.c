#include <stdio.h>

int main() {
	char str[264];
	gets(str);
	printf("%s\n", str);

	scanf("%[^\n]", str);
	printf("%s\n", str);
	
	return 0;
}
