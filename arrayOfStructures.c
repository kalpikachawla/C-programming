#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        char name[20];
    }pokemon;
    pokemon arr[10];
    arr[0].attack = 50;
    arr[1].hp = 60;
    strcpy(arr[2].name, "Pikachu");
    printf("%s\n",arr[2].name);
    printf("%d\n",arr[0].attack);
    printf("%d\n",arr[1].hp);
    
    
    return 0;
}