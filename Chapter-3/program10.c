# include <stdio.h>
// This program prints out the factorial of a given series of numbers
int main()
{
    int num, fact=1, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        fact = fact * i;
        printf("The factorial of %d is %d\n", i, fact);
    }
    return 0;
}