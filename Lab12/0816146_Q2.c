#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	while (T --> 0) {
		scanf("%d", &N);
		if (N % 9)
			printf("%d\n", N*10/9);
		else
			printf("%d %d\n", N*10/9-1, N*10/9);
	}

	return 0;
}
