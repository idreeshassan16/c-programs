#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    i =2;
    while(i<=n-1)
    {
        if(n%i==0)
        {
            printf("Not a prime number");
            break;
        }
    } i++;
    if(i==n)
    {
        printf("Prime number");
    }
}