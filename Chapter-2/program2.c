# include <stdio.h>
// This program prints out the absolute value of a given number
int main()
{
    int num, abs_value;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("The absolute value of %d is %d", num, num);
    }
    else if (num < 0)
    {
        abs_value = -num;
        printf("The absolute value of %d is %d", num, abs_value);
    }
    return 0;
}