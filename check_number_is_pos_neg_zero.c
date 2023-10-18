#include <stdio.h>
int main()
{
    int a[25],i,neg =0,pos =0,even = 0,odd = 0;
    printf("enter 25 elements of array:\n");
    for(i =0;i<=24;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=24;i++)
    {
        a[i]<0? neg++:pos++;
        a[i]%2?odd++:even++;
    }
    printf("Negative elements = %d\n",neg);
    printf("Positive elements = %d\n",pos);
    printf("Even elements = %d\n",even);
    printf("Odd elements = %d\n",odd);
}