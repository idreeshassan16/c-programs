#include <stdio.h>
int main()
{
    int bs,da,hra,gs;
    printf("Enter the salary:");
    scanf("%d",&bs);

    da = 0.4*bs;
    hra = 0.2*bs;
    gs = da+hra+bs;

    printf("Gross salary is %d",gs);
    return 0;
}