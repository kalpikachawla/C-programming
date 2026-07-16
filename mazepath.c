#include<stdio.h>
int maze(int cr,int cc,int er, int ec){
    int RightWays=0;
    int DownWays=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        RightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        DownWays += maze(cr+1,cc,er,ec);
    }
    if(cc<ec && cr<er){
         RightWays += maze(cr,cc+1,er,ec);
          DownWays += maze(cr+1,cc,er,ec);
         }
         int ways=RightWays+DownWays;
         return ways;

}
int main(){
    int n,m;
    printf("Enter no of rows in maze :");
    scanf("%d",&n);
    printf("Enter no of columns in maze :");
    scanf("%d",&m);
    int ways=maze(1,1,n,m);
    printf("%d",ways);
    return 0;
}