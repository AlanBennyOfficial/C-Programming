#include<stdio.h>

int main(void){

    int n,i;
    printf("Enter any number to find the multiplication tables till 10:\n");
    scanf("%d",&n);
    printf("\n");
    
    for(i=1;i<=10;i++)  
        printf("%d x %d = %d\n", n,i,n*i);
    return 0;

}