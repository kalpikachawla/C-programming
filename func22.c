#include<stdio.h>
void area(float r){
    float pi=3.14;
    float area= pi*r*r;
    printf("The area of circle is : %f",area);
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    area(n);

    return 0;
}