#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter all the 4 values : ");
    scanf("%d %d %d %d", x1,x2,y1,y2);
    int dis = sqrt(pow(x2-x1,2)+ pow(y2-y1,2)); 
    printf("Dist is %d",dis);
}