#include <stdio.h>

int main(){
    int a1,a2,b=0;
    printf("Input any number:");
    scanf("%d",&a1);

    a2=a1;

    while(a1!=0){
         b = a1%10;

    }

    if(a2==b)
        printf("%d is a palindrome", a2);
    else
        printf("%d is not a palindrome", a2);

    return 0;
}
