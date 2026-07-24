#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct student{
    int rn; 
    char name[20];
    char dept[20];
    char cse[20];
    int yoj;
}student;
void check(student x, student y){
    if(strcmp(x.dept,y.dept)==0) printf("The departments are same");
    else{
        printf("The departments are not same");
    }
    return;
}
int main(){
 student x;
 student y;
 x.rn = 90;
 y.rn = 20;
 strcpy(x.dept, "Electrical");
 strcpy(y.dept,"Electrical");
 check(x,y);
    return 0;
}