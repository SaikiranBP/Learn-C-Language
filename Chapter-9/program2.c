# include <stdio.h>
// Basic program on structure using typedef keyword
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;

    pokemon a;
    a.hp = 100;
    a.speed = 30;
    a.attack = 50;
    a.tier = 'A';
    printf("%c\n", a.tier);
    printf("%d\n", a.attack);
    printf("%d\n", a.speed);
    printf("%d\n", a.hp);
}