#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier; 
        char name[15];
    }pokemon;

int main(){
    pokemon pikachu;
    pikachu.attack = 70;
    pikachu.hp = 70;
    pikachu.tier = 'S';
    pokemon*x = &pikachu;
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.hp);
    printf("%p",&pikachu.tier);
    return 0;
}