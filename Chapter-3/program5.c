# include <stdio.h>
// This program is used to count the number of digits
int main(){
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count ++;
    }
    printf("The count of the digits is: %d" ,count);
    return 0;
}