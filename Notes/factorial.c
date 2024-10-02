// C program to Find the Factorial Using for Loop
#include <stdio.h>


int main() {
    int N, num, fact=1, i;
    printf("Input a number:");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fact *= i;
    }

    
    printf("Factorial of %d is %d", N, fact);
    return 0;
}
