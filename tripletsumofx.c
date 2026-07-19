#include<stdio.h>
int main(){
    int arr[7] = {1,7,9,5,4,3,2};
    int n; 
    printf("Enter n :");
    scanf("%d",&n);
    int count=0;
    for(int i=0; i<=6; i++){
        for(int j=i+1; j<=6; j++)
        for(int q=j+1; q<=6; q++)
        if(arr[i]+arr[j]+arr[q]==n){
            count++;
            printf("(%d,%d,%d) is the pair\n",arr[i],arr[j],arr[q]);
        }
    }
    printf("The number of pairs is %d.",count);
    return 0;
}