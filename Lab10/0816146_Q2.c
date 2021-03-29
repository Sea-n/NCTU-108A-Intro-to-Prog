#include <stdio.h>

int main() {
	int a[270] = {0};
	int b[270] = {0};
	for (a[260]=0; a[260]<3; ++a[260]) {
		for (*b=*a=1; *a^10;) {
			*a = getchar();
			if ('0' <= *a && *a <= '9')
				a[++*b] = *a&0x2F;
		}
		for (*a=0; *b-1; --*b)
			b[++*a] += a[*b];
	}

	for (*a=1; b[*a]; ++*a)
		for (b[*a] &= 0x1F; b[*a] > 9; b[1+*a]++)
			b[*a] -= 10;

	while (--*a)
		putchar('0'|b[*a]);
	putchar('\n');

	return 0;
}
