#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {

    char surname[30], moduleName[50], firstLast[2];

    printf("Enter the name: ");
    gets(surname);

    printf("\nEnter the name: ");
    gets(moduleName);

    //loop to display surname backwards
    for (int i = strlen(surname); i >= 0; i--) {
       
        printf("%c ", surname[i]);

        if (i == strlen(surname)) {
            char last = surname[i - 1];
            firstLast[0] = last;
        }
        if (i == 0) {
            char first = surname[i];
            firstLast[1] = first;

        }

        printf("%s", firstLast);


    }
}