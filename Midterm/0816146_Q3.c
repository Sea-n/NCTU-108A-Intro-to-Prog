#include <stdio.h>

int main() {
    int i, j;
    for (;;) {
        scanf("%d", &i);
        if (!(j=i)) return 0;

        while (j --> 2)
            if (!(i%j)) j =-- i;
        printf("%d\n", i);
    }
}
