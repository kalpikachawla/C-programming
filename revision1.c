#include <stdio.h>
int main(){
    int x;
    printf("Enter year : ");
    scanf("%d",&x);
    if(x%4==0){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
    return 0;

}
   