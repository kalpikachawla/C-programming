#include <stdio.h>
void check_number(int x){
    if(x>0 && x%2==0){
        printf("Positive Even");
    }
    else if(x>0 && x%2!=0){
        printf("Positive Odd");
    }
    else if(x<0){
        printf("Negative number");
    }
    else{
        printf("Zero");
    }
    return;
}
int main(){
    int x=10;
  check_number(x);

    return 0;
}