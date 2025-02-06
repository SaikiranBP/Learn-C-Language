# include <stdio.h>
// Thi program prints the pattern of alphabet triangle
int main()
{
    int i, j, rows;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=65; i<65+rows; i++){
        for (j=65; j<=i; j++){
            printf("%c ", (char)j);
        }
        printf("\n");
    }
    return 0;    
}