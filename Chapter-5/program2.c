# include <stdio.h>
// This program swaps givrn 2 numbers using third variable
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The first number after swapping is : %d ", a);
    printf("\nThe second number after swapping is : %d ", b);
    return 0;
}