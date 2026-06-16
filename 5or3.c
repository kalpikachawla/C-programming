#include <stdio.h>
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        printf("It is divisible by 5 or 3");
    }
    return 0;
}
