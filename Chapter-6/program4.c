# include <stdio.h>
// This program prints out the reverse elements of the arrays
int main()
{
    int arr[5] = {2,3,4,5,6}, rev_arr[5];   
    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i=0; i<5; i++){
        rev_arr[i] = arr[4-i];
    }
    for (int i=0; i<5; i++){
        printf("%d ", rev_arr[i]);
    }
    return 0;
}