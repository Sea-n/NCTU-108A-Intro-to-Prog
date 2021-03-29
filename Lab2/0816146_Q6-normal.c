#include <stdio.h>

int main() {
	float a, b;
	char c;

	printf("Expression: ");
	scanf("%lf%c%lf", &a, &c, &b);

	if (a < -1000 || a > 1000
	||  b < -1000 || b > 1000) {
		printf("Invalid value.\n");
		return 0;
	}

	if (c == '+') printf("%.2f + %.2f = %.2f.\n", a, b, a+b);
	if (c == '-') printf("%.2f - %.2f = %.2f.\n", a, b, a-b);
	if (c == '*') printf("%.2f * %.2f = %.2f.\n", a, b, a*b);
	if (c == '/') printf("%.2f / %.2f = %.2f.\n", a, b, a/b);
	return 0;
}
