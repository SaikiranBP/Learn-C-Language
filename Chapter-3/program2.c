# include <stdio.h>
# include <math.h>
//
int main()
{
    int n, i, a, r;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common ratio: ");
    scanf("%d", &r);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
        printf("%d ", a);
        a = a*r;
    }
}