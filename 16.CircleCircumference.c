#include <stdio.h>

int main(){

    float r,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    circumference=2*3.14*r;
    printf("The circumference of the circle is: %f", circumference);
    return 0;
}