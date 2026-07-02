#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("n is divisible by both");
    }
    else{
        printf("n is not divisible by one but not other");
    }
   return 0;
}