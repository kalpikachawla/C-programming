#include <stdio.h>
int main(){
   float n;
   printf("Enter the value of n :");
   scanf("%f",&n);
   float a=100;
   for(float i=1; i<=n; i++){
    printf("%f\n",a);
    a=(a)/(0.5);
   }

    return 0;
}