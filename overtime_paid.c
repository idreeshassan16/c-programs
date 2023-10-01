#include <stdio.h>
int main()
{
    int emp,h;
    float otp;
    for(emp =1;emp<=10;emp++)
    {
        printf("Enter the hours:");
        scanf("%d",&h);
        if(h>40)
        {
            otp = 12.30;
            printf("overtime paid of employes which works above 40 hours is Rs.%f\n",otp);
        }
        else
            printf("No overtime paid\n");
    }
    return 0;
}