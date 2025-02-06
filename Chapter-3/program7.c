# include <stdio.h>
// This program prints out the reverse of a given number
int main()
{
    int num, last_digit;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The reverse of %d is: ", num);
    while (num != 0)
    {
        last_digit = num %  10;
        num = num / 10;
        printf("%d", last_digit);
    }  
    return 0;
}