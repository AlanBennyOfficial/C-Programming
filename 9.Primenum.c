#include <stdio.h>

int main(void){

    int a,d=2;
    printf("Enter the number:");
    scanf("%d", &a);
    
    if(a%d!=0)
        printf("%d is a prime number", a);

    else if(a%d==0)
        printf("%d is not a prime number", a);
    else
        d+1;
    return 0;
}