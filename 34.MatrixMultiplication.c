#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int size, i, j;
    
    printf("Enter the size of the Matrix: ");
    scanf("%d", &size);

    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("\nMultiplied Matrix\n");

    printf("The resulting matrix is:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}