#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int sq = sqrt(n);
    // printf("%d",sq);   
    int ans = sq *sq;
    printf("ans is %d\n",ans);
    printf("sq is %d\n",sq*sq);
    if(ans == n){
    printf("perfect Square");
    }
    else
    printf("not perfect Square"); 

}