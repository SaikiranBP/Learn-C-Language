# include <stdio.h>
// This program is used to print the sum of the digits
int main()
{
    int num, sum=0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while (num != 0)
    {
        remainder = num %  10;
        sum = sum + remainder;
        num = num / 10;
    }  
    printf("The sum of the digits is: %d", sum);
    return 0;
}