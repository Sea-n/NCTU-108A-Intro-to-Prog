#include <stdio.h>

int main() {
	char i[5][8] = {
		"%2d",
		"%3d",
		"%.6d",
		"%8.6d",
		"%08d"
	};
	for (int j=0; j<5; j++) {
		printf("Sample for %s:\n", i[j]);
		for (int k=5; k<0x123; k+=0xFB) {
			printf(i[j], k);
			puts("");
		}
	}
	return 0;
}
