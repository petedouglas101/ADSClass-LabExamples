#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int side1 = 0;
	int side2 = 0;
	int side3 = 0;

	printf("Please enter side 1: ");
	scanf("%d", &side1);
	printf("Please enter side 2: ");
	scanf("%d", &side2);
	printf("Please enter side 3: ");
	scanf("%d", &side3);



	if (side1 + side2 > side3 || side2 + side3 > side1 || side1 + side3 > side2) {
		printf("This is a valid triangle!");
			if ((side1 == side2 && side1 != side3 && side2 != side3) || (side2 == side3 && side2 != side1 && side3 != side1) || (side1 == side3 && side1 != side2 && side3 != side2)) {
				printf("This is an isosceles triangle!");
			}
			if (side1 == side2 && side1 == side3) {
				printf("This is an equilateral triangle!");
			}
			if (side1 != side2 && side1 != side3 && side2 != side3) {
				printf("This is a scalene triangle!");
			}
	}
	else {
		printf("This is not a valid triangle!");
	}
	return 0;
}