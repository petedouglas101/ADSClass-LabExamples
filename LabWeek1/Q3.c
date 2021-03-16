#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("Please enter three numbers: ");
	scanf("%d,%d,%d", &num1, &num2, &num3);
	int average = (num1 + num2 + num2) / 3;
	printf("The average of the number is: %d ", average);

	return 0;

}