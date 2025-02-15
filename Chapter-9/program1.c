# include <stdio.h>
// Basic program on structures
int main()
{
    struct cricketer{
        int age;
        int runs;
    }player;

    player.age = 36;
    player.runs = 14000;
    printf("%d\n", player.age);
    printf("%d\n", player.runs);
}