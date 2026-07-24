#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        float price;
        int noofpages;
    }a,b,c;
    a.noofpages=100;
    a.price = 231.78;
    strcpy(a.name,"Harry Potter");
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    printf("\n");
    b.noofpages = 50;
    b.price = 345.89;
    strcpy(b.name,"Wings of fire");
    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
    printf("\n");
    c.noofpages = 90;
    c.price = 567.90;
    strcpy(c.name,"To kill a mockingbird");
    printf("%d\n",c.noofpages);
    printf("%f\n",c.price);
    printf("%s\n",c.name);




    
    return 0;
}