#include <stdio.h>

void hex(int k);

int main() {
	int n;

	scanf("%d", &n);
	hex(n);
	puts(n ? "" : "0");

	return 0;
}

void hex(int k) {
	if (!k) return;

	hex(k>>4);

	if ((k&=017) > 011)
		k += 07;
	putchar('0' + k);
}
