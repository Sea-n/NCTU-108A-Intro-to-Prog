#include <stdio.h>
#include <string.h>

int main() {
	char str[264] = {}, *i;
	fgets(str+2, 260, stdin);
	scanf("%c", str);

	i = strtok(str+2, str);
	while (i) {
		printf("%s\n", i);
		i = strtok(NULL, str);
	}

	return 0;
}
