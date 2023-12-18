#include<stdio.h>
#include<math.h>
int BinToDec(int b){
    int n = b;
    int d;
    int DN =0;
    int i =0;
    while(n>0){
        d = n%10;
        DN = DN + d*(pow(2,i));
        i++;
        n = n/10;
    }
    printf("Decimal No. is : %d",DN);
    
}
int main(){
    int b;
    printf("Enter the binary no. ");
    scanf("%d",&b);
    BinToDec(b);
}