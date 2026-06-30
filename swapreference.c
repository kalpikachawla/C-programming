#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;    

}
int main(){
    int a,b;
    a=2;
    b=9;
    swap(&a,&b);
    printf("The value of a is %d",a);
    printf("\n");
    printf("The value of b is %d",b);
    
    return 0;
}