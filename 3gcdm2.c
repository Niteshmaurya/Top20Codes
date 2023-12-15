#include<stdio.h>
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else
    gcd(b%a,a);
}
int main(){
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d is %d",a,b,gcd(a,b));
}