#include<stdio.h>
int main(){
    int arr[2][3];
  printf("Enter all elements:\n");
   for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
     }
    int maxsum = -1;
    int rownumber = 0;
     for(int i = 0; i < 2; i++){
     int sum = 0;
     for(int j = 0; j < 3; j++){
            sum = sum + arr[i][j];
        }

        if(sum > maxsum){
            maxsum = sum;
            rownumber = i;
        }
    }

    printf("The maximum sum is %d and row number is %d", maxsum, rownumber);

    return 0;
}