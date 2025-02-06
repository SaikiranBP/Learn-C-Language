# include <stdio.h>
// This program prints out the series of aritmetic progression of common difference 2
int main()
{
    int n, i, a, d;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &d);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        printf("%d ", a);
        a = a + d;
    }
    return 0;
}