//factorial of a number.
#include <stdio.h>
int main()
{
    int n,i,fact =1;
    printf("Enter any number :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact = fact*i;
    }
    printf("Factorial =%d",fact);
    return 0;
}