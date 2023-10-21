#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the  four digit number:");
    scanf("%d",&n);
    int z = sum( n);
    printf("sum is %d",z);
}
int sum(int n)
{
    int n1,n2,n3,n4,s1;
    n1=n%10;
    n = n/10;
    n2= n%10;
    n = n/10;
    n3 = n%10;
    n = n/10;
    n4 = n%10;
    n = n/10;
    s1= n1+n2+n3+n4; 
    return s1;
}