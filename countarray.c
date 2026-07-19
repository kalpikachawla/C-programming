#include<stdio.h>
int main(){
    int arr[5] = {2,67,89,90,23};
    int x;
    printf("Enter x :");
    scanf("%d",&x);
    int count=0;
    for(int i=0; i<=4; i++){
        if(arr[i]>x) count++;
    }
    printf("Te total number greater than %d is %d.",x,count);
    return 0;
}