#include <stdio.h>

int main (void){
    int a,i;
    printf("Input any number:");
    scanf("%d",&a);


    for(int j=0;j<=a;j++){
        for(i=2;i<j;i++){
            
            if(j%i==0)
            {

                break;
            }
        }   

        if(i==j)
                printf("%d ", j);

        
    
    }
    return 0;
}