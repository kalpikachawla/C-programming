#include<stdio.h>
void reverse(int a){
   int r=0;
   while(a>0){
    r=r*10;
    r=r+(a%10);
    a=a/10;
   }
   printf("The reverse digit is : %d ",r);
   return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    reverse(n);
    
    return 0;
}