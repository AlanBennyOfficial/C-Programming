#include <stdio.h>

int main (void){

    int n,low,high,flag;
    printf("Input the range:");
    scanf("%d%d",&low,&high);

    // swap numbers if low is greather than high
   if (low > high) {
      low -= high;
      high += low;
      low = high - low;
   }

    printf("Prime numbers between %d and %d are:\n ",low,high);


    while (low<high){

        flag=0; // flag=0, Assuming the number is prime
        low=low+1;
        n=low;

        if (n<=1)
            flag=1;

        for(int i=2;i<=n/2;i++){

            if(n%i==0)
            {
                flag=1;
                break;
            }
        }   

        if(flag == 0)
            printf("%d, ", n);    
    }

    return 0;
}