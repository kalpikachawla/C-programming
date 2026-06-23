# include <stdio.h>
int main(){
   # include <stdio.h>
int main(){
    return 0;
    int x,y,z;
    printf("Enter the value of x :");
    scanf("%d",&x);
     printf("Enter the value of y :");
    scanf("%d",&y);
     printf("Enter the value of z :");
    scanf("%d",&z);
    if(x==y && x==z){
        printf("The type of triangle is equilateral.");
    }
    else if(x==y && x!=z){
        printf("The type of triangle is isoceles.");
    }
    else{
        printf("The type of triangle is scalene.");
    }

}
    
   return 0;

}