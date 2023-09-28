#include <stdio.h>
int main()
{
    int a[5],i,n;
    printf("Enter the elements :");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    n = *a;
    for(i=0;i<=4;i++)
    {
        if(*(a+1)<n)
        {
            n = *(a+1);
        }
    }
    printf("Smallest number is %d\n",n);
}