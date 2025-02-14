# include <stdio.h>
// This program takes input from the user and again prints out the output of a 2-D array
int main()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter the elements:\n");
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
}