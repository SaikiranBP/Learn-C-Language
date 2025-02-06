# include <stdio.h>
// This program prints the pattern of reverse star triangle
int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>0; i--){
        for (j=1; j<=i ;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}