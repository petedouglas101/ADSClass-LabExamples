#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float fahr;
	int lower = 0;
	int upper = 0;
	int step = 0;

	printf("Please enter lower, upper and step values: \n");
	scanf("%d%d%d", &lower, &upper, &step);

	for (fahr = lower; fahr <= upper; fahr = fahr + step) {
		printf("%3.0f, %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}