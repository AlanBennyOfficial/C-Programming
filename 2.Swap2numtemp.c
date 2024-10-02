#include <stdio.h>

int main(void){
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d%d", &a,&b);
    
    temp=a;
    a=b;
    b=temp;

    printf("Swapped numbers are %d and %d", a,b);
    
    return 0;
}