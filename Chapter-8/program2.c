# include <stdio.h>
// This program finds out the length of the string
int main()
{
    char str[40];
    int i=0;
    int size=0;
    puts("Enter the string");
    gets(str);
    while (str[i] != '\0'){
        size++;
        i++;
    }
    printf("The length of the string is : %d", size);
    return 0;
}