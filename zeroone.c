#include<stdio.h>
int main(){
    int arr[3][4];
    printf("Enter all the elements :\n");
    int maxCount = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    
    }
   printf("\n");
    for(int i=0;i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<3; i++){
        int count = 0;
        for(int j=0; j<4; j++){
            if(arr[i][j]==1) count ++;
        }
        if(maxCount<count){
            maxCount = count;
        }
    }
    printf("The maximum numbers of 1s is %d",maxCount);
    return 0;
}