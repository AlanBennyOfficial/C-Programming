#include <stdio.h>
#include <math.h>

int main(){
    float x1,x2,y1,y2,distance;

    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input y1: ");
    scanf("%f", &y1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y2: ");
    scanf("%f", &y2);
    
    distance = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)); //d=√((x2 – x1)² + (y2 – y1)²)
    
    printf("The distance between (%f, %f) and (%f, %f) is: %f\n", x1, y1, x2, y2, distance);
    
    return 0;
}