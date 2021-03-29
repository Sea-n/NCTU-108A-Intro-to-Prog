#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
	long long i, j, k;
	scanf("%lld", &i);
	while (i --> 0) {
		scanf("%lld %lld", &j, &k);
		assert(j <= k);
		k -= j;
		for (j=1; j*j/4<k; ++j)
			;
		printf("%lld\n", --j);
	}
	return 0;
}
