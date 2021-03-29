#include <stdio.h>

int main() {
	int a[20] = {0};
	for (*a=1; ':' ^ (a[++*a] = getchar()^'0'); )
		if (a[*a] == 29) {
			putchar('-');
			--*a;
		}

	for (a[a[1]]=*a^=a[1]=*a; ++*a<<1<a[1]; )
		a[*a+1] += a[a[1]-*a];
	for (; *a+1<a[1]; ++*a)
		a[*a+1] = a[a[1]-*a];

	for (*a=1; a[++*a]||*a<*(1+a); )
		while (a[*a] > 10)
			a[*a] -= 10,
			++a[1+*a];

	while (1 <-- *a)
		putchar('0'|a[*a]);
	putchar('\n');

	return 0;
}
