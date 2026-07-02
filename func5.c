#include<stdio.h>
void cube(int a){
    a=a*a*a;
    printf("%d",a);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    cube(n);
    return 0;
}