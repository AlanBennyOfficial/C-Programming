#include <stdio.h>

int main(void){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d", &a,&b);
    
    a=a-b;
    b=b+a;
    a=b-a;

    printf("Swapped numbers are %d and %d", a,b);
    
    return 0;
}