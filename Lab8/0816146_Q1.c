#include <stdio.h>
#include <math.h>

double avg(int *A);
double rms(int *A);

int main() {
	int A[25] = {0};
	scanf("%d", A);
	for (A[22]=*A; A[22]; --A[22])
		scanf("%d", A+A[22]);
	double a = avg(A);
	double m = rms(A);
	printf("%.2lf %.2lf\n", a, m);

	return 0;
}

double avg(int *A) {
	for (A[22]=*A; A[22]; --A[22]) {
		A[23] += *(A+*(A+22));
	}
	return (double)A[23] / *A;
}

double rms(int *A) {
	for (A[22]++; A[22]<=*A; A[22]++) {
		A[24] += *(A+*(A+22))**(*(22+A)+A);
	}
	return sqrt((double)A[24] / *A);
}
