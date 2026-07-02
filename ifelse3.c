#include<stdio.h>
int main(){
    int x;
    printf("Enter amount :");
    scanf("%d",&x);
    if(x<=15000){
        printf("Transaction successful");
    }
    else{
        printf("Insufficient amount");
    }
    return 0;
}