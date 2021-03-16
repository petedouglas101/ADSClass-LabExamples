#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	float fahr = 0;
	float cent = 0;
	printf("Please enter degrees fahrenheit: ");
	scanf("%f", &fahr);
	cent = (fahr - 32.0) * (5.0 / 9.0);
	printf("The temerature in centigrade is: %f", cent);

	return 0;
}