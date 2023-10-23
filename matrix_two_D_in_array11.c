#include <stdio.h>
int main()
{
    int a[3][2] ={{2,3},{3,4},{3,5}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}