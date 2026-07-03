#include<stdio.h>
int main(){
    int x;
    printf("Enter x :");
    scanf("%d",&x);
    if(x>=90 && x<=100){
        printf("A grade");
    }
    else if(x>=75 && x<=89){
        printf("B grade");
    }
    else if(x>=60 && x<=74){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
}