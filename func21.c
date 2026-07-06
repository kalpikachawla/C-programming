#include<stdio.h>
void rectangle(int a,int b){
   for(int i=1; i<=a; i++){
    for(int q=1; q<=a; q++){
        printf("@");
    }
    printf("\n");
   }
   return; 
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int q;
    printf("Enter q :");
    scanf("%d",&q);
    rectangle(n,q);
    return 0;
}