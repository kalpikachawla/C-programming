#include<stdio.h>
int  calculatetotal(int p, int q){
    int total=p*q;
    printf("The total cost is %d",total);
    return total;
}
int main(){
    int p,q,total;
    printf("Enter price :");
    scanf("%d",&p);
    printf("Enter quantity :");
    scanf("%d",&q);
    calculatetotal(p,q);
    
    
    return 0;
}
