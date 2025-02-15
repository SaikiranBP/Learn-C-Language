# include <stdio.h>
// This program calculates the size of the structures in bytes 
int main()
{
    typedef struct employee{
        int emp_id;
        char name[20];
        int salary;
    }employee;;
    printf("%d bytes", sizeof(employee));
}