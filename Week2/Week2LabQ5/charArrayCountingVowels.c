#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void main() {
	char charArray[MAX];
	int index = 0;
	char character;
	int count = 0;
	int signal;

	do {
		printf("Please enter a valid character: \n");
		signal = scanf("%c", &character);

		if (signal != 1) {
			printf("Invalid character!\n");
		}
		else if (index > MAX - 1) {     /* array full */
			printf("No more room after %d values\n", index);
		}else {     /* valid entry */
			charArray[index++] = character;
			if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
				count++;
			}
		}

	} while (signal != 1 && index < MAX);

	for (int i = 0; i < MAX; i++) {
		printf("%c\n", charArray[i]);
	}

	printf("There are %d vowels in the array!", count);



}