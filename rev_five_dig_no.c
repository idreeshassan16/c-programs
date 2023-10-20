#include <stdio.h>
int main ()
{
    int n,n1,n2,n3,n4,n5,rev;
    printf("Enter the five digit number:");
    scanf("%d",&n);
    n1 = n%10;
    n = n/10;
    n2= n%10;
    n =n/10;
    n3 = n%10;
    n = n/10;
    n4 = n%10;
    n = n/10;
    n5 = n%10;
    n = n/10;
    rev = n1*10000+ n2*1000+ n3*100 +n4*10 +n5*1;
    printf("Reverse five digit number is %d ",rev);
    return 0;
}