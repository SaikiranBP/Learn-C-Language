# include <stdio.h>
// This program converts characters of strings into upper case
int main()
{
    char str[50], upper_str[50];
    puts("Enter the string");
    gets(str);
    int i=0;
    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            upper_str[i] = str[i] - 32;
        }
        else{
            upper_str[i] = str[i];
        }
        i++;
        upper_str[i] = '\0';
    }
    puts(upper_str);
    return 0;
}