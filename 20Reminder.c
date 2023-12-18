#include<stdio.h>
int main(){
    int m,n;
    int i = 1,count = 1;
    printf("enter the value of m and n : ");
    scanf("%d %d",&m,&n);
    if(m<n){
        printf("Reminder is %d",m);
    }
    else if (m==n){
        printf("Reminder is 0");
    }
    else{
        // for(i = 1;i<n;i++){
        //     count = i*n;
        // }
        
        while (n*i<=m)
        {
            i++;
        }
        // printf("%d",i);
        int ans = m - n*(i-1);
        printf("Reminder is %d",ans);
        
    }
}