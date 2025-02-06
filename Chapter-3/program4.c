#  include <stdio.h>
// Program on increment and decrement operator
int main()
{
    int x = 3, z, y;
    z = x++;
    y = --x;
    printf("%d\n", z);
    printf("%d", y);
    return 0;   
}