#include<stdio.h>
void fib(int);
int main ()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{
    if(n==0)
    return;
    printf("%d ",(fib(n-1)+fib(n)));
    
}