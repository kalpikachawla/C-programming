#include<stdio.h>
void difference(int a, int b){
    if(a>b){
        int d = a-b;
        printf("%d",d);
    }
    else{
       int d = b-a;
        printf("%d",d);
    }
    return;
}
int main(){
    int n,x;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter x :");
    scanf("%d",&x);
    difference(n,x);


    return 0;
}