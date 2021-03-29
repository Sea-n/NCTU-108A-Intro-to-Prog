#include <stdio.h>

typedef struct {
	int id;
	char name[10];
} student;

int main() {
	student me = {
		816000,
		"lwchan"
	};

	printf("%s: %d\n", me.name, me.id);

	return 0;
}
