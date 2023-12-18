#include<stdio.h>
int DecToBin(int n){

    int i =1,j;
   int binno = 0;
   for(j=n;j>0;j=j/2){
    binno = binno + (n%2)*i;
    i = i*10;
    n = n/2;
   }
   printf("Binary No. is %d ",binno);
}