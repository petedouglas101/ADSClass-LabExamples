#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;
	int year;
	printf("Please enter the month and year: \n");
	scanf("%d%d", &month, &year);

	if ((year % 4 == 0 && year % 100 > 0) || (year % 400 == 0)) {
		printf("This is a leap year\n");
	}
	else {
		printf("Year is not a leap year!\n");
	}

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("There are 31 days in this month\n");
		break;

	case 2:
		printf("There are 28 days in this month\n");
		break;

	default:
		printf("There is 30 days in this month\n");



	}