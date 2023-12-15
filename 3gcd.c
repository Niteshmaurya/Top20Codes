#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    printf("gcd of %d and %d is %d\n", a, b, gcd(a, b));   
    int lcm = (a*b)/gcd(a,b);
    printf("lcm of %d and %d is %d",a,b,lcm);     
    return 0;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;

    if (a > b)
       return gcd(a - b, b);
    // else if(b>a)
    return gcd(a, b - a);     
}
// print