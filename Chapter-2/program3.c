# include <stdio.h>
// This program prints out the greatest number among the given 3 numbers using ternary operators
int main()
{
    int num_1, num_2, num_3;
    printf("Enter the values of a b and c\n");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    (num_1>num_2 && num_1>num_3 ? printf("%d is greater", num_1) : (num_2>num_3 ? printf("%d is greater", num_2) : printf("%d is greater", num_3)));
    return 0;
}   