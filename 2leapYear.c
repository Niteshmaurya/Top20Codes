#include<stdio.h>

int target(int year){
    if(year%400==0)
    return 1;

    if(year%100==0)
    return 0;

    if(year%4==0)  
    return 1;  
   
    return 0;
}

int main(){
   
    int year;
    printf("enter year : ");
    scanf("%d",&year);
 target(year)?printf("leap Year"):printf("not a leap year");
 return 0;    
    
}
