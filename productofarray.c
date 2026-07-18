#include<stdio.h>
int main(){
    int arr[5]={1,3,7,9,1};
    int pro=1;
    for(int i=0; i<=4; i++){
        pro = pro * arr[i];
    }
    printf("The product is %d",pro);
    return 0;
}