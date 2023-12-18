#include<stdio.h>
int decToBin(int n){
    int i=0;
    int j;
    int Bnum[32];
    while (n>0)
    {
    Bnum[i] = n%2;
    n = n/2;
    i++;   
            }
    for(j = i-1;j>=0;j--){
        printf("%d",Bnum[j]);
    }
    
}
int main(){
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    decToBin(n);
}