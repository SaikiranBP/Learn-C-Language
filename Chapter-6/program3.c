# include <stdio.h>
// This program prints out the maximum element of the array.
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    int max=arr[0];
    printf("Enter the elements of the array: \n");
    for (int i=0; i<size; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] > arr[0]){
            max = arr[i];
        }
        else
        {
            max = arr[0];
        }
        
    }
    printf("Maximum element is : %d", max);   
}