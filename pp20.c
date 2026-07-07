#include<stdio.h>
void rectangle(int a , int b){
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}
int main(){
    int n,r;
    printf("Enter n :");
    scanf("%d",&n);
     printf("Enter r :");
    scanf("%d",&r);
    rectangle(n,r);
    
    
    return 0;
}