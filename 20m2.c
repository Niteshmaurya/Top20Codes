#include<stdio.h>
int giveReminder(int m,int n){
    int t = m/n; // 3
    int k = t*n;   // 27
    return  m-k;               // 28-27
}
int main(){
    int n,m;
    printf("Enter the value of m and n : ");
    scanf("%d %d",&m,&n);

    printf("Reminder is %d : " ,    giveReminder(m,n)  );
}