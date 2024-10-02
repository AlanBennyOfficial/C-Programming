#include <stdio.h>

int main(void){

    int a,b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    
    if(a>b)
        printf("%d is the largest number", a);
    else
        printf("%d is the largest number", b);

    return 0;
}