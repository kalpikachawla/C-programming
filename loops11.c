#include<stdio.h>
int main(){
    int n;
    int p=1234;
    do{
        printf("Enter 4-digit pin :");
        scanf("%d",&n);
        if(n!=p){
            printf("Invalid pin. Try again\n");
        }
    } while(n!=p);
        printf("Access Granted\n");
    
    return 0;
}