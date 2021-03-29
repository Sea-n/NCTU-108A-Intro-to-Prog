#include <stdio.h>

int main() {
	for (int i=1; i<8; i+=2) {
		putchar('\t');
		int j=i;
		while (j --> 0)
			putchar('*');
		putchar('\n');
	}
}
