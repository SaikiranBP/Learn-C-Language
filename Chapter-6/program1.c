# include <stdio.h>
/* This program takes the elements from the user 
as input and prints out the elements of the array */
int main()
{   
    int n, arr[100];

    printf("Enter the number of elements to store in an array: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        printf("Enter the element for arr[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nPrinting out the elements of the array: ");
    
    for (int i=0; i<n; i++){
        printf("\nThe element of arr[%d] is %d", i+1, arr[i]);
    }
    return 0;
}