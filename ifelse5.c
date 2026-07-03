#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x :");
    scanf("%d",&x);
     printf("Enter y :");
    scanf("%d",&y);
     printf("Enter z :");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("%d is the greatest",x);
    }
    else if(y>x && y>z){
        printf("%d is the greatest",y);
    }
    else{
        printf("%d is the greatest",z);
    }
    return 0;
}