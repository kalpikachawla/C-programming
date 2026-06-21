#include <stdio.h>
int main(){
    int n,x;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    printf("Enter the number of columns :");
    scanf("%d",&x);
    for(int i=1;i<=n; i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}