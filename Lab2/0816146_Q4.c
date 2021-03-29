#include <stdio.h>

#define x(k) { \
	printf("Size of %s: %lu byte(s).\n", #k, sizeof(k)); \
}

int main() {
	x(int);
	x(long int);
	x(long long int);
	x(unsigned int);
	x(float);
	x(double);
	x(char);
	return 0;
}
