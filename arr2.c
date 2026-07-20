#include<stdio.h>
int main(){
    int arr[5] = {1,7,8,9,40};
    int max = -1;
    for(int i=0; i<=4; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maximum number from array is %d.",max);
    return 0;
}