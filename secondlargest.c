#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {2,3,8,0,10};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=4; i++){
        if(max<arr[i]){
             max = arr[i];
 }
 }
 for(int i=0; i<=4; i++){
    if(arr[i]>smax && arr[i]!=max){
       smax=arr[i];
    }
   
 }
 printf("The second largest number is %d.",smax);
 

    return 0;
}