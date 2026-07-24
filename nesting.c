#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier; 
        char name[15];
    }pokemon;
    
    typedef struct legendrypokemon{
        pokemon normal;
        char ability[10];
    } legendrypokemon;
    legendrypokemon mewtwo;
    mewtwo.ability;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.attack = 200;
    mewtwo.normal.hp = 150;
    mewtwo.normal.speed = 90;
    mewtwo.normal.tier = 'S';

    return 0;
}