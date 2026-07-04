#include<stdio.h>
int main(){
    int n,x;
    printf("Enter n :");
    scanf("%d",&n);
    x=n;
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("%d\n",r);
    int sum=x+r;
    printf("%d",sum);
   
    return 0;
}