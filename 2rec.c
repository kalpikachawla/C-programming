#include<stdio.h>
void incredec(int n){
    if(n==0) return;
    printf("%d\n",n);
    incredec(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    incredec(n);
    return 0;
}