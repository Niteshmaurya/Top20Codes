#include<stdio.h>
int main(){
    printf("Enter the decimal no.");
    int n;
    scanf("%d",&n);
    int arr[32];
    for(int i=0;i<=3112;i++){

        arr[i] = n %2;
        n = n/2;
    }
     for (int i = 31; i >=0; i--) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }
    // printf("Array is %d",);
}