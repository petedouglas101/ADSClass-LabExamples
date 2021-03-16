#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int number ;
    float num2;  //conversion character %f
    double num3;  //conversion character %lf
    printf("enter number: ");
    scanf_f("%d", &number);
    printf("The number is %-10d\n", number);
    
    printf("enter num3: ");
    scanf_f("%lf", &num3);
    printf("number is %d and num3 is %4.1lf\n", number, num3);
    
    return 0;
}
  