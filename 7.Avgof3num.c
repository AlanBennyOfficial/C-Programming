#include <stdio.h>

int main(void){

    int a,b,c,avg;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);

    avg=(a+b+c)/3;

    printf("Average of %d, %d and %d is %d", a,b,c,avg);

    return 0;
}