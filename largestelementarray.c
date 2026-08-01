#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter all the elements in array :\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int max = -1;
    for(int i=0; i<5; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The largest element of the array is %d",max);
    
    return 0;
}