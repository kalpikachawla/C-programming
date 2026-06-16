#include <stdio.h>
int main(){
    double x1,x2,y1,y2,x3,y3;
    printf("Enter the value of x1 :");
    scanf("%If",&x1);

    printf("Enter the value of y1 :");
    scanf("%If",&y1);

    printf("Enter the value of x2 :");
    scanf("%If",&x2);

    printf("Enter the value of y2 :");
    scanf("%If",&y2);

    printf("Enter the value of x3 :");
    scanf("%If",&x3);
     printf("Enter the value of y3 :");
    scanf("%If",&y3);

    double M1,M2;
    M1=(y2-y1)/(x2-x1);
    M2=(y3-y2)/(x3-x2);

    if(M1==M2){
        printf("The points are in a straight line");
    }
    else{
        printf("The points are not in a straight line");

    }



    return 0;
}