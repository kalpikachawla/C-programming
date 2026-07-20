#include<stdio.h>
int main(){
    int arr[5] = {2,1,5,7,8};
    int min = arr[0];
    for(int i=0; i<=4; i++){
       if(min > arr[i]){
        min = arr[i];
       }
    }
    printf("The minimum of array is %d.",min);
    return 0;
}