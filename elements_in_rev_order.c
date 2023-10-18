#include <stdio.h>
int main()
{
    int a1[5],a2[5],i,j;
    printf("Enter the elements of array of a1:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0,j=4;i<=4;i++,j--)
    {
        a2[j] =a1[i];
    }
    printf("elements of an array in reverse order is:\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",a2[i]);
    }
    return 0;
}