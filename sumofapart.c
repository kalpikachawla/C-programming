#include<stdio.h>
int main(){
    int arr[4][4];
    printf("Enter elements of array : \n");
    for(int i=0; i<=2; i++){
        for(int j=1; j<=3; j++){
        scanf("%d",&arr[i][j]);
        }
        }
        printf("\n");
        for(int i=0; i<=2; i++){
        for(int j=1; j<=3; j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
        int sum = 0;
        for(int i=0; i<=2; i++){
            for(int j=1; j<=3; j++){
                sum +=arr[i][j];
            }
        }
        printf("The sum of given matrix is %d",sum);

    return 0;
}