#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int i,fact=1;
    for(i=n;i>0;i--){
        fact = fact *i;
    }
    printf("factorial of %d is %d",n,fact);
}