#include<stdio.h>
int main(){
    struct pokemon
    {
     int hp;
     int speed;
     int attack;
     char tier;
 };
 struct pokemon pikachu;
 pikachu.attack = 60;
 pikachu.hp = 120;
 pikachu.speed = 150;
 pikachu.tier = 'A';


 struct pokemon charizard;
 charizard.attack = 120;
 charizard.hp = 80;
 charizard.speed = 80;
 charizard.tier = 'S';

printf("%d\n%d\n",pikachu.attack,charizard.attack);
printf("%c\n%c",pikachu.tier,charizard.tier);

    
    return 0;
}