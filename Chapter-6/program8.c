# include <stdio.h>
// Binary search program
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

    int mid, low = 0, high = size-1;
    while(high+low){
        mid = (high + low)/2;
        if (arr[mid] == search)
        {
            printf("%d is present at the position %d", search, mid);
            break;
        }
        else if (arr[mid] > search)
        {
            high = mid;
        }
        else if (arr[mid] < search)
        {
            low = mid;
        }
        
    }
}