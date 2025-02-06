# include <stdio.h>
// This program prints out the value of 1+2-3+4-5+6-7..... upto n terms
int main()
{
    int num, i, j, sum, sum1=0, sum2=0;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &num);

    for (i=1; i<=num; i=i+2)
    {
        sum1 = sum1 + i;
    }
    for (j=2; j<=num; j=j+2)
    {
        sum2 = sum2 + j;
    }
    sum = sum1 - sum2;
    printf("The sum of the series is %d", sum);
    return 0;
}