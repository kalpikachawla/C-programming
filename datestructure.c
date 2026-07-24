#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    bool flag = true;
    date a,b;
    a.date = 12;
    a.month= 4;
    a.year = 2024;
    b.date = 9;
    b.month = 4;
    b.year = 2010;
    if(a.date!=b.date) flag == false;
    if(a.month!=b.month) flag == false;
    if(a.year!=b.year) flag == false;
    if(flag==false) printf("The dates are same");
    else {
        printf("The dates are not same");
    }

    

    return 0;
}