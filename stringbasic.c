#include<stdio.h>
int main(){
    int a[3] = {1,2,3};
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
   char arr[3] = {'a','t','l'};
     printf("%p\n",&arr[0]);
     printf("%p\n",&arr[1]);
     printf("%p\n",&arr[2]);
     char ch = '0';
    printf("%d",ch);
    return 0;
}