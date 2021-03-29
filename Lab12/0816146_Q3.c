#include <stdio.h>

int main() {
	int T, N, k, a, b;
	scanf("%d", &T);
	while (T --> 0) {
		scanf("%d", &N);
		a = b = 0;
		while (N --> 0) {
			scanf("%d", &k);
			a += k;
			if (a > b)
				b = a;
			else if (a < 0)
				a = 0;
		}
		printf("%d\n", b);
	}

	return 0;
}
