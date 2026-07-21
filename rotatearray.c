#include<stdio.h>
void reverse(int arr[],int a , int b){
    for(int i=a,j=b; i<=j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n,k;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter k :");
    scanf("%d",&k);
    int arr[n];
    printf("Enter the elements of array :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,4);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
      return 0;
}