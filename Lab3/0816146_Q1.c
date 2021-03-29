#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	int s=1, n=0;
	printf("Input = ");
	while ((c = getchar())) {
		if (c == '-')
			s *= -1;
		else if (c == '.') {
			n += (getchar() > '4');
			break;
		} else if (isdigit(c))
			n = n*10 + c-'0';
		else
			break;
	}
	printf("Output = %d\n", s * n);
	return 0;
}
