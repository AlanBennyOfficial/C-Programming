#include <stdio.h>

 
int gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (1)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
 
int main()
{
    printf("Enter the two numbers: \n");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The GCD of two numbers is: %d", gcd(x, y));
    printf("\nThe LCM of two numbers is: %d", lcm(x, y));
    return 0;
}