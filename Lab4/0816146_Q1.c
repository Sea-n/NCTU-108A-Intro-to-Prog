#include <stdio.h>

int main() {
	int o, h, i, j;
	for (;;) {
		printf("Choose what you want to print out. (1)pyramid (2)diamond (3)exit: ");
		scanf("%d", &o);
		if (o/3)
			return 0;
		printf("Enter the height you want (4 < height < 10): ");
		scanf("%d", &h);
		if (o>>1) {
			putchar(' ');
			for (j=5; j<h*2; j++)
				putchar('*');
			putchar('\n');

			for (i=1; i<h; i++) {
				for (j=1; j<i; j++)
					putchar(' ');
				for (j=i*2+1; j<h*2; j++)
					putchar('*');
				putchar('\n');
			}
		} else {
			for (i=0; i<h; i++) {
				for (j=i+1; j<h; j++)
					putchar(' ');
				for (j=0; j<=i*2; j++)
					putchar('*');
				putchar('\n');
			}
		}
		putchar('\n');
	}
	return 0;
}
