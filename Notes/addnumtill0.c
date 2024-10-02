#include <stdio.h>

int main()
{
    int n, sum=0;
    do
    {
        printf("Enter number:");
        scanf("%d", &n);
        sum= sum+n;
        printf("%d\n", sum);
        
    } while (n!=0);

    
    return 0;
}