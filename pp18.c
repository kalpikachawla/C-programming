#include<stdio.h>
void mirrortri(int a){
    int nsp=a-1;
    int nst=1;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("@");
        }
        printf("\n");
        nsp--;
        nst++;
    }
    return;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    mirrortri(n);

    return 0;
}