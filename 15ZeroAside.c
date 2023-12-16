#include<stdio.h>
int main(){
    int arr[] = { 1,1,1,1,0,1,0,0};
    int count = 0;
    int k = sizeof(arr)/4;
    int i;
    for(i=0;i<k;i++){
        if(arr[i] == 0){
            count++;
        }
    }    
    int ans[k];
    for(i=0;i<count;i++){
        ans[i]=0;
    }
    for(i=count;i<=k-1;i++){
        ans[i]= 1;
    }  
    printf("ans is ");
    for(i=0;i<k;i++){
        printf("%d",ans[i]);
    }
}