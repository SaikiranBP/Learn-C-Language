# include <stdio.h>
// This program prints out the roll number of the students who got marks less than 35.

int main()
{
    int arr[10] = {12,23,65,76,78,98,68,45,0,32};
    printf("The students who got less than 35 are ");
    for (int i=0; i<10; i++){
        if (arr[i] < 35){
            printf("\nRoll no: %d", i+1);
        }
    }
    return 0;
}