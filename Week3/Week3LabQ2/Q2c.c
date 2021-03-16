#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{

    char surname[30], moduleName[50];

    printf("Enter the name: ");
    gets(surname);

    printf("\nEnter the name: ");
    gets(moduleName);

    //loop to display surname backwards
    for (int i = strlen(surname); i >= 0; i--) {
        printf("%c ", surname[i]);
    }



}