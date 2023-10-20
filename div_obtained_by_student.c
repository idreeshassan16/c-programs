//write the program to calculate the division obtained by the student.
#include <stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per;
    printf("Enter the marks of each subject:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    per = total /500*100;
    if(per >= 60)
    printf("Frist division");
    else
    {
        if(per >50 && per < 60)
        printf("Second division");
        else
        {
            if(per >40 && per < 49)
            printf("Third division");
            else
            printf("Fail");
        }
    }
}