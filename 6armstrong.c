#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int d=0;
    int temp = n;
    while (temp>0)
    {
        /* code */
        // n = n%10;

        temp = temp/10;
        d++;
    }
    printf("d is %d\n",d);
     temp = n;    
    int sum =0;

    while (temp>0)
    {
        /* code */
        int r = temp%10;
        sum = sum + pow(r,d);
        temp = temp/10;
   
    }
    printf("sum is %d\n",sum);
    printf("n is %d\n",n);
    if(sum == n){
        printf("Armstrong hai");
    }
    else
    printf("armstrong nahi hai");   
    
    
}