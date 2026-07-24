#include<stdio.h>
#include<string.h>
int main(){
    struct person {
       int age;
       char name[20];
       float salary;
 }a,b;
 a.age = 23;
 a.salary = 23459.90;
 strcpy(a.name, "Ramesh Sharma");

 b.age = 24;
 b.salary = 25000.50;
 strcpy(b.name, "Shyam Verma");

 printf("%s\n",a.name);
 printf("%d",b.age);
    
    return 0;
}