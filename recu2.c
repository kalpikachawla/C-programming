#include<stdio.h>
#include<math.h>
int power(int n , int x){
    if(x==0) return 1;
    int ans = power(n,x-1);
    return n*ans;

}
int main(){
    int n;
    printf("Enter base :");
    scanf("%d",&n);
    int x; 
    printf("Enter power :");
    scanf("%d",&x);
   int result= power(n,x);
    printf("%d^%d is %d", n,x,result);
    return 0;
}