#include<stdio.h>
int fibbo(int n){
    if(n==1 || n==2) return 1;
      int ans=fibbo(n-1) + fibbo(n-2);
      return ans;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int a = fibbo(n);
    printf("%d",a);

    return 0;
}