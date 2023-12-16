#include<stdio.h>
int main(){
    int bin[] = {0,0,1,0,1,0,0,0,0};
    int count;
    int i;
    int k = sizeof(bin)/4;
    for(i=k-1;i>=0;i--){
        if(1 == bin[i])
        {
            count = i;
            break;
        }

    }
    printf("last is %d",k-count);
}