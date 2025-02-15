# include <stdio.h>
# include <string.h>
// Array of structures
int main()
{
    typedef struct cricket
    {
        char name[20];
        int age;
        int runs;
        char country[20];   
    }cricket;

    cricket arr[3];
    
    strcpy(arr[0].name, "Virat Kohli");
    arr[0].age = 36;
    arr[0].runs = 14000;
    strcpy(arr[0].country, "India");
    
    strcpy(arr[1].name, "Rohit Sharma");
    arr[1].age = 38;
    arr[1].runs = 11000;
    strcpy(arr[1].country, "India");
    
    strcpy(arr[2].name, "Chris Gayle");
    arr[2].age = 40;
    arr[2].runs = 12000;
    strcpy(arr[2].country, "West Indies");

    for (int i=0; i<=2; i++){
        printf("Name: %s\n", arr[i].name);
        printf("Country: %s\n", arr[i].country);
        printf("Age: %d\n", arr[i].age);
        printf("Runs: %d\n", arr[i].runs);
        printf("\n");
    }
    return 0;
}