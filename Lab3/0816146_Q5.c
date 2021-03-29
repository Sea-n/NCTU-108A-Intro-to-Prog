#include <stdio.h>

#define v(k) { \
	int _k = k; \
	if (_k & 1<<31) \
		_k = ~_k+1; \
	if (_k > 1e3) { \
		puts("Invalid value."); \
		return 0; \
	} \
}

#define i(k) { \
	if (c == #k[0]) \
		printf("%.2f %c %.2f = %.2f\n", a, c, b, a k b); \
}

int main() {
	double a, b;
	char c;
	for (;;) {
		printf("Expression: ");
		scanf("%lf%c%lf", &a, &c, &b);
		if (!a && !b && c=='/')
			return 0;
		v(a);
		v(b);
		i(+);
		i(-);
		i(*);
		i(/);
	}
	return 0;
}
