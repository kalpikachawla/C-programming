#include <stdio.h>
int main(){
    int n,x;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    printf("Enter the number of columns :");
    scanf("%d",&x);
    for(int i=1;i<=n; i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}