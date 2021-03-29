#include <stdio.h>

int a(int b, int c);

int main() {
    int A[2];
    for (;;) {
        scanf("%d", A);
        if (!++*A) return 0;
        scanf("%d", A+1);
        printf("%d\n", a(*A, 1+*(1+A)));
    }
}

int a(int b, int c) {
    if (!c || c>b) return 0;
    return b-->2 ? a(b, c)+a(b, --c) : 1;
}
