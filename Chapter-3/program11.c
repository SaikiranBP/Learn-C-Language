# include <stdio.h>
// This program prints out the fibonacci series of n terms
int main()
{
    int a=0, b=1, c, num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("The fibonacci series is: %d %d ", a, b);
    for (int  i=2; i< num; i++)
    {
        c = a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
    return 0;
}