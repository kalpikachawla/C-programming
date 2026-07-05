#include<stdio.h>
void marks(int a ){
    if(a>=33){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    return;
}
int main(){
    int n;
    printf("Enter marks :");
    scanf("%d",&n);
    marks(n);
    return 0;
}