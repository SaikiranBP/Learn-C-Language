# include <stdio.h>
// This program prints out the series of aritmetic progression of common difference 2
int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i=1;i<=2*n;i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}