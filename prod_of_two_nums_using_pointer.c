#include <stdio.h>
float product(int a, float b)
{
    float pr;
    pr = a*b;
    return (pr);
}
int main()
{
    int n;
    float p, m;
    printf("Enter the two numbers:");
    scanf("%d %f",&n,&m);
    p = product(n,m);
    printf("Product is %f ",p);
}
