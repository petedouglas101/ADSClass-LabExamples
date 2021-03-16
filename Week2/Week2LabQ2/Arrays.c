#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 4

void main() {
    int table[MAX];	  /* declare array    */
    int i, index = 0;	 /* index for the array */
    int count = 0;
    int total = 0;


    do
    {
        printf("Enter an integer : ");
        scanf("%d", &table[index++]);
    } while (index < MAX);



    /* write out numbers in reverse */
    for (i = index - 1; i >= 0; i--)
        printf("%d\n", table[i]);

    for (i = 0; i < MAX; i++) {
        if (table[i] % 2 == 0) {
            count++;
            total += table[i];
            
        }
    }

    int average = total / count;
    printf("There are %d even numbers in this array and the average of these numbers is %0.4d\n", count, average);
        

}