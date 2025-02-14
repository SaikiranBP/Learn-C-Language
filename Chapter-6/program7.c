# include <stdio.h>
// This program inserts a new element at a given location
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

    int pos, value;
    printf("Enter the position you want to enter the element: ");
    scanf("%d", &pos);
    printf("Enter the value of the element: ");
    scanf("%d", &value);
    for (int i=size; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    size++;
    printf("The array after inserting the new element is : ");
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
}