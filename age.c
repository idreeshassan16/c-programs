#include <stdio.h>
int main()
{
    int i,age;
    for(i = 0; i < 35; i++)
    {
        printf("%d\nEnter the age:\n",i);
        scanf("%d",&age);
        if (age>35)
        {
             break;
        }
    }
}