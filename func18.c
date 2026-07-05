#include<stdio.h>
void table(int a){
    for(int i=a; i<=(a*10); i+=a){
    printf("%d ",i);
}
return;

}

int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    table(n);
    return 0;
}