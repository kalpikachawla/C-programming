#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || i==n || j==i){
                // logic :
                // j==1 left vertical side
                //i==n bottom base
                // j==i diagonal side
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}