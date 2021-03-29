#include <stdio.h>

int main() {
	long long a, b;
	printf("Number of animals: ");
	scanf("%lld", &a);
	printf("Number of legs: ");
	scanf("%lld", &b);

	printf("Chicken: %lld\n", (a<<1)-(b>>1));
	printf("Rabbit: %lld\n", (b>>1)-a);
}
