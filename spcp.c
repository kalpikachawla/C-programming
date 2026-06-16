#include <stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter the cost price");
    scanf("%d",&cp);
    printf("Enter the selling price");
    scanf("%d",&sp);
    if(cp<sp){
        printf("The seller made a profit.");
    }
    else{
        printf("The seller made a loss.");
    }
    printf("The amount of profit is : %d", sp-cp);
printf("The amount of loss is :%d",cp-sp);
    return 0;

}