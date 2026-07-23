#include<stdio.h>
#include<string.h>
int main(){
    // strlen
    char* s="Kalpika";
    int x = strlen(s);
    printf("%d\n",x);
    // strcpy
    char s1[12] = "Kalpika";
    char s2[12];
    strcpy(s2,s1);
    printf("%s\n",s2);
    // strcat
    char a1[12] = "Kalpika";
    char a2[12]= "Chawla";
    strcat(a1,a2);
    printf("%s\n",a1);
    return 0;
}