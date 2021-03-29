#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b, c, i;
	char *A, *B, *C;

	scanf("%d", &a);
	A = (char*) malloc(a+1);
	for (i=a; i>=0; i--)
		scanf("%c", A+i);

	scanf("%d", &b);
	B = (char*) malloc(b+1);
	for (i=b; i>=0; i--)
		scanf("%c", B+i);

	c = (a>b) ? a : b;

	C = malloc(++c);
	memset(C, 0x30, c+1);

	for (i=0; i<a; i++)
		C[c-i] += A[i] & 0xF;
	free(A);

	for (i=0; i<b; i++)
		C[c-i] += B[i] & 0xF;
	free(B);

	for (i=c; i; i--)
		if (C[i] > '9') {
			C[i] -= 10;
			C[i-1] += 1;
		}

	while (i[C] == 0x30)
		i++;

	printf("%s\n", C+i);

	free(C);

	return 0;
}
