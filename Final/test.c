#include <stdio.h>
#define MIN 10

int main() {

	#define MAX MIN*5
	MAX = 100;

	printf("%d\n", MAX);

	return 0;
}
