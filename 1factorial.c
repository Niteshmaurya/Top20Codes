#include<stdio.h>

int fact(int k);
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    fact(n);
    printf("fact of %d is %d",n,fact(n));
    return 0;
}
int fact(int k){    
    if(k==0|| k==1){
        return 1;

    }
    else
    return k*fact(k-1);
}
