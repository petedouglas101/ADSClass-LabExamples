#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int numRows;
	char star = '*';

	printf("Enter the number of rows: \n");
	scanf("%d", &numRows);

	for (int row = 1; row <= numRows; row++) {
		for (int symbol = 1; symbol <= row; symbol++) {
			printf("%c", star);
		}
		printf("\n");
	}
}