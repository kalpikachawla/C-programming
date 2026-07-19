#include<stdio.h>
void fun(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}// array refrence se pass hota hai.
int main(){
    int arr[2] = {1,3};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}