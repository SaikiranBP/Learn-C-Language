# include <stdio.h>
// This program reverses the string
int main()
{
    char str[40];
    puts("Enter the string: ");
    gets(str);

    int size = 0, i = 0;
    while(str[i] != '\0'){
        size++;
        i++;}
    puts("The reversed string is: ");
    
    for (int i=size; i>=0; i--){
        printf("%c", str[i]);}

}