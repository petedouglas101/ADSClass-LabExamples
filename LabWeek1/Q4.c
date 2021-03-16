#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char init;
	int age = 0;
	double height;
	printf("Please enter your initials: \n");
	scanf_f("%c", &init);
	printf("Please enter your age: \n");
	scanf_f("%d", &age);
	printf("Please enter your height: \n");
	scanf_f("%lf", &height);
	printf("Personal Statistics\n---------------------\n---------------------\nIdentifier      Age      Height\n%c               %d           %lf", init, age, height);




	return 0;
}