#include<stdio.h>

void hexaDecimal(int n ){
    char hexaDecimal[100];
    int i =0;
    while(n>0){
        int temp = 0;
        temp = n %16;
        if(temp<10){
            hexaDecimal[i] = temp + 48;
            i++;
        }
        else{
            hexaDecimal[i++] = temp + 55;
        }
        n = n/16;
    }
    for(int j = i-1; j>=0;j--){
        printf(hexaDecimal[j]);
    }
}

int main(){
    int n = 234;
    hexaDecimal(n);
}