#include <stdio.h>
int main()
{
    int a,b,e;
    int basexp(int b,int e);
    printf("base and exponent:");
    scanf("%d %d",&b,&e);
    a = basexp(b,e);
    printf("expression is %d",a);
}
int basexp(int b ,int e)
{
    if(e==1)
    {
        return (b);
    }
    else
    {
        return(b*basexp(b,e-1));
    }
}