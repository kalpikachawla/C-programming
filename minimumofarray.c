#include<stdio.h>
int main(){
    int arr[5] = {100,89,90,78,56};
    int min=arr[0];
    for(int i=1; i<5; i++){
        if(min> arr[i]){
            min = arr[i];
        }
    }
    printf("The minimum value is %d",min);
    
    return 0;
}