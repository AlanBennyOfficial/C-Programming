#include <stdio.h>

int main(){
    int a,s;

    do{
        printf("Enter the number:");
        scanf("%d",&a);
        s+=a;
    }while(a!=0);

    printf("Sum = %d\n", s);
    return 0;
}
