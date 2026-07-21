#include<stdio.h>
void reverse(int arr[], int a, int b){
    for(int i=a,j=b; i<=j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[5] = {2,4,6,7,8};
    reverse(arr,1,3);
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}