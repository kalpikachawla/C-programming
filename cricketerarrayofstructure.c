#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
    char name[20];
    int age;
    int totalmatches;
    float avgruns;
    }cricketer;
    cricketer arr[3];
    for(int i=0; i<3; i++){
       printf("Enter the name of cricketer:\n"); 
        scanf(" %[^\n]",arr[i].name);
        printf("Enter the age of cricketer :\n");
        scanf("%d",&arr[i].age);
        printf("Enter the number of total matches played :\n");
        scanf("%d",&arr[i].totalmatches);
        printf("Enter the average runs scored by the cricketer :\n");
        scanf("%f",&arr[i].avgruns);
        printf("\n");
  }
  for(int i=0; i<3; i++){
    printf("Name : %s\n",arr[i].name);
    printf("Age : %d\n",arr[i].age);
    printf("No.of Matches : %d\n",arr[i].totalmatches);
    printf("Average runs : %f\n",arr[i].avgruns);
  }
 
    return 0;
}