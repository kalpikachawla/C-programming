#include<stdio.h>
int main(){
    int arr[5] = {1,2,8,6,4};
    int x;
    int count=0;
    printf("Enter x :");
    scanf("%d",&x);
    for(int i=0; i<=4; i++){
        for(int j=i+1; j<=4; j++){
            if(arr[i]+arr[j]==x){
                count++;
            printf("(%d,%d)\n",arr[i],arr[j]);
         }
     }
     }
        printf("The total number of pairs is %d.",count);
    return 0;
}