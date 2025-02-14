# include <stdio.h>
// This program converts characters of strings into lower case
int main()
{
    char str[50], lower_str[50];
    puts("Enter the string");
    gets(str);
    int i=0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            lower_str[i] = str[i] + 32;
        }
        else{
            lower_str[i] = str[i];
        }
        i++;
        lower_str[i] = '\0';
    }
    puts(lower_str);
    return 0;
}