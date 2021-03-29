#include <stdio.h>
#include <string.h>

int main() {
	char str[264];
	fgets(str+2, 260, stdin);
	str[1] = strlen(str+2);
	for (*str=0; ; ++*str)
		if (str[*str+2] ^ str[*(str+1)-*str])
			break;
	putchar('Y' ^ (*str-*(str+1)+1?23:0));

	return 0;
}
