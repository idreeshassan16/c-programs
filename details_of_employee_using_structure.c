#include <stdio.h>
int main()
{
    struct employe
    {
        int no;
        float bal;
    };
    struct employe a[10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("enter account number and balance:");
        scanf("%d %f",&a[i].no,&a[i].bal);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d %f\n",a[i].no,a[i].bal);
    }
}