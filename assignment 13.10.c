#include<stdio.h>
int power(int,int);
int main ()
{
    int n,a,p;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&n);
    p=power(a,n);
    printf("%d raise to power %d is %d",a,n,p);
    return 0;
}
int power(int a,int n)
{
    if(n==1)
    return;
    return (a*power(a,n-1));
    
}