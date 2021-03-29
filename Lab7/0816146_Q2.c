#include <stdio.h>
#include <string.h>

struct o {
	int type;
	char str[20];
} O[20];

int main() {
	int i, j, k, c, p=0;
	char input[20];
	scanf("%s", input);

	for (i=0; i<strlen(input); i++) {
		O[p].str[0] = input[i];
		O[p].str[1] = '\0';

		if (input[i] == '*' || input[i] == '/')
			O[p++].type = 2;
		else if (input[i] == '+' || input[i] == '-')
			O[p++].type = 1;
		else
			O[p++].type = 0;
	}

	for (k=2; k; k--)
		do {
			c = 0;
			for (i=1; i<p; i+=2) {
				if (O[i].type ^ k)
					continue;

				strcat(O[i].str, O[i-1].str);
				strcat(O[i].str, O[i+1].str);
				strcpy(O[i-1].str, O[i].str);

				p -= 2;
				for (j=i; j<p; j++) {
					O[j].type = O[j+2].type;
					strcpy(O[j].str, O[j+2].str);
				}

				c++;
				break;
			}
		} while (c);

	printf("%s\n", O[0].str);
}
