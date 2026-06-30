#include<stdio.h>
void even(int a){
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return;
}
int main(){
    even(11);
    
    return 0;
}