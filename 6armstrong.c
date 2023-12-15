#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int d=0;
    while (n>0)
    {
        /* code */
        // n = n%10;

        n = n/10;
        d++;
    }
    printf("d is %d",d);
    
}