#include<stdio.h>
void table(int x){
    for(int i=1; i<=10; i++)
    printf("%d*%d=%d\n",x,i,x*i);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    table(n);

    return 0;
}