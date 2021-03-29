#include <stdio.h>

int a[12345] = {0},
	p[1260],
	i, j, k;

int main() {
	for (i=2, k^=k; i<1e4; i++) {
		if (!i[a])
			p[k++]=i[a]=i;
		for (j^=j; j<k; j++) {
			if (i*j[p] > 1e4)
				break;
			a[i*p[j]]=j[p];
			if (!(i%p[j]))
				break;
		}
	}

	for (;;) {
		printf("Input: ");
		scanf("%d", &k);
		if (!k) return 0;

		if (k < 2 || k > 1e4) {
			puts("Out of range.");
			continue;
		}

		printf("%d = ", k);
		if (k[a]^k) {
			for (i=1, k/=j=k[a]; k^1; k/=j=k[a])
				(j^k[a])?
					printf(i^1?"%d^%d * ":"%d * ", j, i),
					i=1:i++;
			printf(i^1?"%d^%d\n":"%d\n", j, i);
		} else
			printf("%d\n", k);
	}
}
