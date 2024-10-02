#include <stdio.h>

int main (void){
    int a,b,c,sum;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);

    sum=a+b+c;

    printf("Sum of %d, %d and %d = %d", a,b,c,sum);
    
    return 0;
}