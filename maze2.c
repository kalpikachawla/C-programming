#include<stdio.h>
int maze2(int n, int m){
    int Rightways=0;
    int Downways=0;
    if(n==1 && m==1) return 1;
    if(n==1){
        Rightways += maze2(n,m-1);
    }
    if(m==1){
        Downways +=maze2(n-1,m);
    }
    if(n>1 && m>1){
        Rightways += maze2(n,m-1);
         Downways +=maze2(n-1,m);
         }
    int ways = Rightways + Downways;
    return ways;
    
}
int main(){
    int n,m;
    printf("Enter no of rows in maze :");
    scanf("%d",&n);
    printf("Enter no of columns in maze :");
    scanf("%d",&m);
    int ways=maze2(n,m); 
    printf("%d",ways);
    return 0;
}