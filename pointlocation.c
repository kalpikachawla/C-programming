#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x :");
    scanf("%d",&x);
     printf("Enter the value of y :");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("The points lies on origin");

    }
    else if( y==0){
        printf("The points lies on x-axis");
    }
    else if( x==0){
        printf("The points lies on y-axis");
    }
    else{
        printf("The points does not lies on axes");
    }
    return 0;
}