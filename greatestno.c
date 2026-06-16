#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a");
    scanf("%d",&a);
    if( a>b && a>c && a>d){
        printf("%d is the greatest",a);
    }
    printf("Enter value of b");
    scanf("%d",&b);
    if( b>a && b>c && b>d){
        printf("%d is the greatest",b);
    }
printf("Enter value of c");
    scanf("%d",&c);
    if( c>a && c>b && c>d){
        printf("%d is the greatest",c);
    }
    printf("Enter value of d");
    scanf("%d",&d);
    if( d>a && d>b && d>c){
        printf("%d is the greatest",d);
    }
    return 0;

}
    