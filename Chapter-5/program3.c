# include <stdio.h>
// This program swaps given two numbers without using any variable
int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The first number after swapping is : %d ", a);
    printf("\nThe second number after swapping is : %d ", b);
    return 0;
}