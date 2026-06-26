#include<stdio.h>
void australia(){
    printf("You are in Australia \n");
        return;
}
void england(){
    printf("You are in England \n");
    australia();
    return;
}
void india(){
    printf("You are in India\n");
    england();
    return;
}
int main(){
    india();
    return 0;
}