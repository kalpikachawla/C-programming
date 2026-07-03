#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=n; i<=(n*10); i+=n){
        printf("%d ",i);
    }
    return 0;
}