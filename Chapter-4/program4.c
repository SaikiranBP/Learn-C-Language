# include <stdio.h>
// Thi program prints the pattern of number triangle
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++){
        for (j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;    
}