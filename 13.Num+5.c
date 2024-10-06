#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d incremented by 5 = %d", n, n+5);

    return 0;
}