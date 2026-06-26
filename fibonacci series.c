#include<stdio.h>
int main(){
    int n;
    int a=0;
    int b=1; 
    int c;
    printf("Enter number of terms :");
    scanf("%d",&n);
    printf("Fibbonacci series : \n");
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
       
    }
    return 0;
}