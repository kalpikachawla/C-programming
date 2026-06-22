# include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);
int a;
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1; // start 
        else a=0;
        for(int j=1;j<=i;j++){
            if(a==0) a=1;// switch
            else a=0;
            printf("%d ",a);
        }
        printf("\n");
    }

    return 0;
}