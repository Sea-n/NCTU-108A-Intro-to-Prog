#include <stdio.h>

int main() {
	int A[11][11];

	scanf("%d", *A);
	for (*A[1]=**A; *A[1]; --*A[1])
		for (*A[2]=**A; *A[2]; --*A[2])
			scanf("%d", A[**(A+1)]+*A[2]);

	puts("");
	for (*A[2]=**A; *A[2]; --*A[2])
		for (*A[1]=1; *A[1]<=**A; ++*A[1])
			printf("%d%c", *(A[**(A+1)]+*A[2]), *A[1]-**A?' ':'\n');

	puts("");
	for (*A[1]=1; *A[1]<=**A; ++*A[1])
		for (*A[2]=**A; *A[2]; --*A[2])
			printf("%d%c", *(A[**(A+1)]+*A[2]), *A[2]-1?' ':'\n');

	puts("");
		for (*A[2]=**A; *A[2]; --*A[2])
			for (*A[1]=**A; *A[1]; --*A[1])
				printf("%d%c", *(A[**(A+1)]+*A[2]), *A[1]-1?' ':'\n');
}
