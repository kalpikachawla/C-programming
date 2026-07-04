#include<stdio.h>
int total(int a, int b){
    int price=a*b;
    printf("The total amount is %d",price);
    return price;
}
int main(){
    int n,a;
    printf("Enter quantity :");
    scanf("%d",&n);
    printf("Enter price :");
    scanf("%d",&a);
    total(n,a);
    

    return 0;
}