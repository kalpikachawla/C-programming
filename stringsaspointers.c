#include<stdio.h>
#include<strings.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str;
    *ptr = 'P';
    printf("%s",str);
    return 0;
}