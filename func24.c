#include<stdio.h>
void sum(int a){
   int lastdigit=0;
    int sum=0;
    while(a!=0){
        lastdigit=a%10;
        sum=sum+lastdigit;
        a=a/10;
    }
    printf("The sum of digits is %d",sum);
    return; 
    

}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    sum(n);
    return 0;
}