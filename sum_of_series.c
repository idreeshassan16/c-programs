//show sum of series 
#include <stdio.h>
int main()
{
    int n,i,sum =0;
    printf("enter any number:");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n;i++)
    printf("1/%d+",i);
    for(i=1;i<=n;i++);
    sum = sum+1;
    printf("1/%d",n);
    printf("\nSum=1/%d",sum+1);
    return 0;
}