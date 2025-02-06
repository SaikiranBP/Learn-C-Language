# include <stdio.h>
// This program prints out the factorial of a given number
int main()
{
    int num, fact=1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=num; i>0; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d", num, fact);
    return 0;
}