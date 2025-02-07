# include <stdio.h>
// This program prints out the pattern of Floyd's triangle
int main()
{
    int i, j, rows, a;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    a = 1;
    for (i=1; i<=rows; i++){
        for (j=1; j<=i; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}