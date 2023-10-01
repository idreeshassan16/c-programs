#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&F);

    C = (F -32)*5/9;
    printf("Temperature in centigrade is %f",C);
    return 0;   
}