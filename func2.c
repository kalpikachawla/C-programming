#include<stdio.h>
void year(int a){
    if(a%4==0){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return ;
}

int main(){
    int n;
    printf("Enter year :");
    scanf("%d",&n);
    year( n);

    
return 0;
}


   