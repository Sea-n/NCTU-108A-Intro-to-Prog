#include <stdio.h>

void swap(int *a, int *b);
int *part(int *A, int *B);
void qs(int *A, int *B);

int main() {
	for (;;) {
		int i, A[123] = {1};
		scanf("%d", A);

		if (!*A)
			return 0;

		for (i=*A; i; i--)
			scanf("%d", A+i);

		qs(A+1, A+*A);

		for (i=*A; i; i--)
			printf("%d ", *(A+i));
		puts("");
	}

	return 0;
}

void qs(int *A, int *B) {
	if (A >= B) return;
	int *C = part(A, B);
	qs(A, C-1);
	qs(C+1, B);
}

int *part(int *A, int *B) {
	int *i = A - 1;
	int *j = i;
	while (j < B) {
		if (*++j > *B) {
			swap(++i, j);
		}
	}
	if (*++i < *B)
		swap(i, B);
	return i;
}

void swap(int *a, int *b) {
	if (a != b)
		*a ^= *b ^= *a ^= *b;
}
