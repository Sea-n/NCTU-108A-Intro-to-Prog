#include <stdio.h>

int main() {
	int c[11];
	scanf("%d", 10 + c);
	while (c[10] --> 0) {
		c[0] = c[1] = -1e5;
		c[2] = c[3] = 1e5;

		scanf("%d", 8 + c);
		while (c[8] --> 0) {
			for (c[9] = 0; c[9] < 4; c[9]++) {
				scanf("%d", 4 + c[9] + c);
				if (c[9] & 2) {
					if (c[c[9]] > c[c[9]|4])
						c[c[9]] = c[c[9]|4];
				} else {
					if (c[c[9]] < c[c[9]|4])
						c[c[9]] = c[c[9]|4];
				}
			}
		}

		c[2] -= c[0];
		c[3] -= c[1];
		printf("%d\n", c[2] * c[3]);
	}

	return 0;
}
