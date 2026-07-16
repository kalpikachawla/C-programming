#include<stdio.h>
void PreinPost(int n){
    if(n==0) return;
    printf("Pre %d\n",n);
    PreinPost(n-1);
    printf("In %d\n",n);
     PreinPost(n-1);
    printf("Post %d\n",n);
    return;

}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    PreinPost(n);
    return 0;
}