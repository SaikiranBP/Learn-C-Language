# include <stdio.h>
// This program prints out the transpose of a given matrix
int main()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter the elements:\n");

    int arr_tran[rows][columns];
    int arr[rows][columns];
    
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("Displaying the elements of the array: \n");
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for (int i=0; i<columns; i++){
        for (int j=0; j<rows; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}