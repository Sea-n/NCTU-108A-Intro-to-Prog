#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
void ins(node *rt, int n);
int getValueByIndex(node *rt, int index);

struct Node {
	int value;
	node *nxt;
};

int main() {
	int M, N, i, k;
	node *rt = (node *) malloc(sizeof(node));

	scanf("%d", &M);
	for (i=0; i<M; i++) {
		scanf("%d", &k);
		ins(rt, k);
	}

	scanf("%d", &N);
	for (i=0; i<N; i++) {
		scanf("%d", &k);
		printf("%d\n", getValueByIndex(rt, k));
	}

	return 0;
}

void ins(node *rt, int n) {
	while (rt->nxt)
		rt = rt->nxt;
	rt->nxt = (node *) malloc(sizeof(node));
	rt->nxt->value = n;
}

int getValueByIndex(node *rt, int index) {
	do {
		if (!rt->nxt)
			return 0;
		rt = rt->nxt;
	} while (index --> 0);
	return rt->value;
}
