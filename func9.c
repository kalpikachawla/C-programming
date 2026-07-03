#include<stdio.h>
void min(int x, int y){
    if(x>y){
        printf("%d is the minimum number",y);
    }
    else{
        printf("%d is the minimum number",x);
    }
    return;
}
int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
     printf("Enter b :");
    scanf("%d",&b);
    min(a,b);
    return 0;
}