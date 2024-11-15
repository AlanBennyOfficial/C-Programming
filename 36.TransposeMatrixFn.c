#include <stdio.h>

void ArrayTranpose(int size, int i, int j,int arr[25][25]){

    printf("The transpose of the matrix is:\n");
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int size, arr[25][25],i,j;
    printf("Enter the size of the array:");
    scanf("%d", &size);

    printf("Enter the matrix elements:\n\n");

    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
                printf("Enter a%d%d: ", i+1, j+1);
                scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    ArrayTranpose(size,i,j,arr);

    return 0;
}
