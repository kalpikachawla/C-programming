#include<stdio.h>
int main(){
    int arr[5]={16,56,89,100,10};
    int max=-1;
    for(int i=0; i<=5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
}
printf("The maximum number is %d",max);
   return 0;
}