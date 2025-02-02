# include <stdio.h>
// This program caluculates the sum of the 2 numbers //
int main()
{
    int num_1, num_2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num_1);
    printf("Enter the second number: ");
    scanf("%d", &num_2);
    sum = num_1 + num_2;
    printf("The sum of %d and %d is %d", num_1, num_2, sum);
    return 0;
}