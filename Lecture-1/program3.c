# include <stdio.h>
// This program prints the ascii value of the given character //
int main()
{
    char ch;
    printf("Enter the character to check the ascii value: ");
    scanf("%c", &ch);
    printf("The ascii value of %c is %d", ch, ch);
    return 0;
}