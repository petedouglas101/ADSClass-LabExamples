#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int t1 = 0;
	int t2 = 1;
	int nextTerm = 0;
	int max = 0;

	printf("Please enter a maximum number: ");
	scanf("%d", &max);
	printf("%d %d ", t1, t2);
	nextTerm = t1 + t2;

	while (nextTerm <= max) {
		printf("%d ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

}