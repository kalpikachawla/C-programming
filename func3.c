#include<stdio.h>
void square(int a){
    a=a*a;
    printf("%d",a);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    square(n) ;
    return 0;
}
    