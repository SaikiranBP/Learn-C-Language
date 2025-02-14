# include <stdio.h>
// Linear search program
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
    int search;
    printf("Enter the element you want to search: ");
    scanf("%d", &search);
    for (int i=0; i<size; i++){
        if (arr[i] == search){
            printf("Search found at position %d", i);
            break;
        }
    }
}