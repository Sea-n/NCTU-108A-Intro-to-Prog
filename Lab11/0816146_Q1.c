#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);

	struct {
		int id, score;
		char name[300];
	} s[__LINE__];
	
	for (i=0; i<n; i++) {
		scanf("%s", i[s].name);
		scanf("%d", &i[s].id);
		scanf("%d", &i[s].score);
	}

	for (i=0; i<n; i++) {
		if (i[s].score < 60)
			continue;
		printf("%s %d\n", i[s].name, i[s].id);
	}

	return 0;
}
