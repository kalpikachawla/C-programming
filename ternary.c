#include <stdio.h>
int main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    // ternary operator
    // exp 1? exp 2: exp 3
    x%2==0 ? printf("Even number") : printf("Odd number");
    return 0;

}