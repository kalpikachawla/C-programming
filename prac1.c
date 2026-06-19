# include <stdio.h>
int main(){
   int x,y,z;
   printf("enter first number :");
    scanf("%d",&x);
    printf("enter second number :");
    scanf("%d",&y);
    printf("enter third number :");
    scanf("%d",&z);
    if (x>y && x>z){
        printf("%d is the largest number",x);
    }
    else if (y>x && y>z){
        printf("%d is the largest number",y);
    }
    else{
        printf("%d is the largest number",z);
    }
    return 0;
}