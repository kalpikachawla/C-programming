#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {23,56,78,90,4};
    int x = 50;
    int idx = -1;
    bool flag = false; 
    for(int i=0; i<=4; i++){
        if(arr[i]==x){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==true){
        printf("%d is present in the array and its index is %d.",x,idx);
    }
    else{
        printf("%d is not present in the array.",x);
    }
    return 0;
}