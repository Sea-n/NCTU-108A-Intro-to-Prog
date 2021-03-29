#include <stdio.h>
#include <string.h>

int main() {
	char str[1234];
	char ans[1234];
	char *c;
	int i, j;
	scanf("%d", &i);

	while (i --> 0) {
		int k = 0;
		scanf("%d\n", &j);

		while (j --> 0) {
			int p = 0;

			fgets(str, 1000, stdin);
			strtok(str, "\n");

			c = strtok(str, " ");
			while (c) {
				if (strlen(c) > p)
					ans[k++] = c[p++];
				c = strtok(NULL, " ");
			}
			ans[k++] = ' ';
		}
		ans[--k] = '\0';
		printf("%s\n", ans);
	}

	return 0;
}
