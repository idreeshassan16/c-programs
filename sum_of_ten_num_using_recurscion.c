#include <stdio.h>
int sum(int);
int main()
{
    int n,a;
    int sum(int n);
    printf("n=");
    scanf("%d",&n);

    a = sum(n);
    printf("sum is %d",a);
    return 0;
}
int sum(int n)
{
    if(n<10)
    {
        return(n);
    }
    else
    {
        return(n%10 + sum(n/10));
    }
}