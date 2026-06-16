#include <stdio.h>
int main(){
    int l;
    int b;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    else{
        printf("Perimeter is greater than area");
    }
    return 0;
}