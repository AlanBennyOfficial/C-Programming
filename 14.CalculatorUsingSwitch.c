#include <stdio.h>

int main(){

    int num1, num2, choice;
    float result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nChoose an operation (+, -, *, /) by choosing numbers between 1 to 4: ");
    scanf("%d", &choice);
    
    switch(choice) {
        
        case 1:
        printf("Sum of %d and %d is = %f\n", num1, num2, result=num1+num2);
        break;
        
        case 2:
        printf("Difference of %d and %d is = %f\n", num1, num2, result=num1-num2);
        break;

        case 3:
        printf("Product of %d and %d is = %f\n", num1, num2, result=num1*num2);
        break;

        case 4:
        if(num2==0) {
            printf("Error! Division by zero is not allowed.\n");
            return 0;
        }
        printf("Quotient of %d and %d is = %f\n", num1, num2, result=num1/(float)num2);
        break;
        
        default:
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}