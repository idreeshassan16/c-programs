#include <stdio.h>
int main()
{
    int pos,neg,zero,num;
    char ans = 'Y';
    pos = neg = zero = 0;
    while(ans == 'Y' || ans == 'Y')
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if(num>0)
            pos++;
        if(num==0)
            zero++;
        if(num<0)
            neg++;
        fflush(stdin);

        printf("Do you want to continue?\n");
        scanf("%c",&ans);
    }
    printf("You entered %d positive number(s)\n ",pos);
    printf("You entered %d negative number(s)\n",neg);
    printf("You entered %d zero number",zero);
}