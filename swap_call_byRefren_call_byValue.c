#include <stdio.h>
int rswap(int *, int *);
int cswap(int , int);
int main()
{
    int a,b,c,d;
    printf("enter a,b:");
    scanf("%d %d ",&a,&b);

    rswap(&a,&b);
    printf("Swap (call by reference): a = %d, b = %d\n",a,b);

    cswap(a,b);
    printf("\nSwap (call by value): a = %d, b = %d",a,b);
    return 0;
}
int rswap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int cswap(int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    //printf("a = %d,  b= %d",a,b);
}