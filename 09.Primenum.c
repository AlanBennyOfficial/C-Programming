#include <stdio.h>

int main (void){

    int a,flag=0; // flag=0 Assuming the number is prime
    printf("Input any number:");
    scanf("%d",&a);

    if (a<=1)
        flag=1;

    for(int i=2;i<=a/2;i++){

        if(a%i==0)
        {
            flag=1;
            break;
        }
    }   

    if(flag == 0)
        printf("%d is a prime number", a);
    else        
        printf("%d is not a prime number", a);


    return 0;
}

//Another method (without flag)
/*
#include <stdio.h>

int main (void){

    int a;
    printf("Input any number:");
    scanf("%d",&a);

    

    for(int i=2;i<=a/2;i++){

        if(a%i==0)
        {
            printf("%d is not a prime number", a);
            return 0;
        }
    }   

    printf("%d is a prime number", a);
    
    return 0;
}
*/
