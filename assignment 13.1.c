#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("Sum of first %d natural number is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    int s;
    if(n==0)
    return 0 ;
    else
    s=n+sum(n-1);
    return s;
}