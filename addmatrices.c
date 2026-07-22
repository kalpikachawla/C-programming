#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows :");
    scanf("%d",&r);
    printf("Enter columns :");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    int res[r][c];
    printf("Enter elements of first array : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        scanf("%d",&arr[i][j]);
        }
        }
        printf("\n");
        printf("Enter elements of second array :\n");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                scanf("%d",&brr[i][j]);
            }
        }
        printf("\n");
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                res[i][j] = arr[i][j] + brr[i][j];
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }

    return 0;
}