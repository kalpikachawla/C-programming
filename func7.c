#include<stdio.h>
int  reverse(int x, int r){
    r=0;
    while(x>0){
        r=r*10;
        r=r+(x%10);
        x=x/10;
    }
    printf("Reverse digit : %d",r);
    return r;
}
int main(){
    int n ,r;
    printf("Enter n :");
    scanf("%d",&n);
    reverse(n,r);
    return 0;
}