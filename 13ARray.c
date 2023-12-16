#include<stdio.h>
#include<stdlib.h>
int main(){
    // printf("E")
    int arr[] = {1,2,2,2,3,4,5};
    printf("Enter what you wanted to search : ");
    int n;
    scanf("%d",&n);
    int k = sizeof(arr)/sizeof(int);
    int i,first = 0;
    int last;
    for(i=0;i<k;i++){
        // printf("n and arr[0] is %d & %d",n,arr[0] );
        if(n == arr[i]){
            first = i;
            break;
            
        }
    }
    last = first;
    for(i =first+1;i<k;i++){
        if(arr[i]==arr[first])
        last++;
    }
    printf("fi is %d\n",first);
    printf("li is %d",last);
}