#include<stdio.h>
void sum(int a){
    int s = a*(a+1)/2;
    printf("%d\n",s);
    return;
}
int main(){
    int n,x;
    printf("Enter number of terms :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter %d number :",i);
        scanf("%d",&x);
        sum(x);
        
        
    }
    return 0;
}