#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows :");
    scanf("%d",&r);
    printf("Enter columns :");
    scanf("%d",&c);
    int arr[r][c];
    int max = -1;
    printf("Enter all the elements :\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
              if(arr[i][j]>max){
            max = arr[i][j];
        }

        }
      }
      printf("The maximum number from array is %d",max);
        

    return 0;
}