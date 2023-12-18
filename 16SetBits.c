#include<stdio.h>
#include"DecToBin.h"
// brian kernighan's Algorithm 

unsigned int countSetBits(int n){
    unsigned int count = 0;
    while (n)
    {
       n = n & (n-1);
       count++; /* code */
    }
    return count;
    
}
int main(){
    int n;
    printf("Enter the value of n ");
    scanf("%d\n",&n);
    DecToBin(n);

    int i;
    // scanf("%d",&i);
    printf("%d",countSetBits(n));
}