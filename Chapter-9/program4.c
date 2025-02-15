# include <stdio.h>
# include <string.h>
// This program takes data of 3 players using structures and again prints back the same data
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int matches;
        float avg_runs;
    }cricketer;

    cricketer arr[3];
    
    for (int i=0; i<3; i++){
        printf("Enter name: ");
        scanf("%s", &arr[i].name);
        printf("Enter age: ");
        scanf("%d", &arr[i].age);
        printf("Enter number of matches: ");
        scanf("%d", &arr[i].matches);
        printf("Enter average runs: ");
        scanf("%f", &arr[i].avg_runs);
    }
    printf("\n");
    for (int i=0; i,3; i++){
        printf("%s", &arr[i].name);
        printf("%d", &arr[i].age);
        printf("%d", &arr[i].matches);
        printf("%d", &arr[i].avg_runs);
    }
    return 0;
}