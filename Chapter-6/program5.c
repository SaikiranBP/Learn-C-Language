# include <stdio.h>
// This program deletes the element from the given position
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements ");
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position from which you want to delete the element: ");
    scanf("%d", &pos);
    for (int i=pos; i<size; i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("The elements after deletion are: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}