# include <stdio.h>
int main(){
    int x;
    printf("Enter x :");
    scanf("%d",&x);
   if(x>0){
    printf("%d is positive number",x);
   }
   else if(x<0){
    printf("%d is negative number",x);
    }
    else {
        printf("%d is neither positive nor negative",x);
    }
    return 0;
}