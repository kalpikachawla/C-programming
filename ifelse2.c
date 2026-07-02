#include<stdio.h>
int main(){
    int x;
    printf("Enter age :");
    scanf("%d",&x);
    if(x>=18){
        printf("The person is eligible to vote");
    }
    else{
        printf("The person is not eligible to vote");
    }
    return 0;
}