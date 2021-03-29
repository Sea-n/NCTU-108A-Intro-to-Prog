#include <stdio.h>

extern long long rand();

int main() {
	long long k, m, l=1, r=1e5;
	
	printf("k = ");
	scanf("%lld", &k);

	do m = l + rand()%(r-l+1);
	while (m*(m+1)<k<<1 ? (l=m+1) : (r=m), l^r);
	
	printf("n = %lld\n", l);
	return 0;
}
