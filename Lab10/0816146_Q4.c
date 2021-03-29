#include <stdio.h>
#include <string.h>

int main() {
	char *n, *p, str[500];
	fgets(str, 300, stdin);
	scanf("%s", str+300);
	scanf("%s", str+400);
	n = p = str;
	while (n) {
		n = strstr(p, str+300);
		if (!n) break;
		*n = 0;
		printf("%s%s", p, str+400);
		p = n + strlen(str+300);
	}
	puts(p);

	return 0;
}
