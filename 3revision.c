# include <stdio.h>
int main(){
    int n,x;
    printf("Enter number  of rows :");
    scanf("%d",&n);
    printf("Enter number of columns :");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}