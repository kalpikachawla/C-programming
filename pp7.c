#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers of terms :");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=7;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        printf("\n");
        nsp++;
        nst-=2;
    
    }
    return 0;
}