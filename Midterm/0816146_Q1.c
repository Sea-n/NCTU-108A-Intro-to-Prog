#include <stdio.h>

int main() {
    int A[123];
    for (;;) {
        scanf("%d", A);
        if (!*A) return 0;

        for (A[111]=*A; A[111]; --A[111])
            scanf("%d", A+A[111]);

        for (A[111]=12345; --A[111];)
            for (A[112]=*A; A[112]; --A[112])
                for (A[113]=A[112]; --A[113];)
                    if (*(A[112]+A) >  *(A[113]+A))
                        *(A[112]+A) ^= *(A[113]+A) ^=
                        *(A[112]+A) ^= *(A[113]+A);

        A[113] = 0;
        for (A[111]=*A; A[111]; --A[111]) {
            A[113] += *(A[111] + A);
        }

        printf("%.2f %d.00 %d.00 %.1f0\n",
        (float)A[113] / *A, *(*A+A), *(1+A),
        (*(A+(*A+1>>1))+*(A+(*A+2>>1))) / 2.);
    }
}