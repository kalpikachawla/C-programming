#include <stdio.h>
int main(){
    int r,s,m;
    printf("Enter the age of ram");
    scanf("%d",&r);
    printf("Enter the age of shyam");
    scanf("%d",&s);
     printf("Enter the age of mohan");
    scanf("%d",&m);
    if(r<m && r<s){
        printf("Ram is the youngest");
    }
    if(r>s && m>s){
        printf("Shyam is the youngest");
    }
    if(m<r && m<s){
        printf("Mohan is the youngest");
    }
    
    
        

    return 0;

}