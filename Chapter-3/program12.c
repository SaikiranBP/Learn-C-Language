# include <stdio.h>
// This program prints out the ascii values of uppercase letters
int main()
{
    int i;
    char ch;
    printf("Printing out the ascii values of the uppercase letters");
    for (i=65; i<=90; i++)
    {
        printf("\n %c %d", (char)i, i);
    }
}