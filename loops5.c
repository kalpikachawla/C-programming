#include<stdio.h>
int main(){
    int n;
    float s,t;
    printf("Enter number of employees :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter the salary of employee %d",i);
        scanf("%f",&s);


        t=t+s;
    }
    printf("\ntotal salary :Rs.%.2f",t);
    
    return 0;
}