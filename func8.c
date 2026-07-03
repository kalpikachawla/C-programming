#include<stdio.h>
void max(int x,int y){
    if(x>y){
        printf("%d is maximum number",x);
    }
    else{
        printf("%d is maximum number ",y);
    }
    return;
}

int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    max(a,b);

    return 0;
}