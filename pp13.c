#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int q=1; q<=nst; q++){
            printf("%d ",i);
        }
       
        
        printf("\n");
        nsp--;
        nst++;
    }

    return 0;
}