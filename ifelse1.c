#include<stdio.h>
int main(){
    int weight;
    int  fragility;
    printf("Enter Weight :");
    scanf("%d",&weight);
    printf("Enter fragility :");
    scanf("%d",&fragility);
    if(weight>20 && fragility==0){
        printf("Heavy duty");
    }
    else if(weight>20 && fragility==1){
        printf("Special handling");
    }
    else if(weight<=20){
        printf("Standard");
    }
    else{
        printf("Light");
    }
   
    return 0;
}