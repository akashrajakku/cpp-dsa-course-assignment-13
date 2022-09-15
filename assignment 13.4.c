#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("Sum of square of first %d natural number is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    return (sum(n-1)+(n*n));
}