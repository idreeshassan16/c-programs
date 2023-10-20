#include <stdio.h>
int main()
{
    int arr[10],i,j;
    printf("Enter 10 elements of array :\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("arr[%d] and arr[%d]",j,10-(j+1));
        if(arr[j]==arr[10-(j+1)])
        {
            printf("Equal\n");
        }
        else
        {
            printf("Unequal\n");
        }
    }
    return 0;
}