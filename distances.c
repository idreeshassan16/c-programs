#include <stdio.h>
int main()
{
    float d1,d2,d3,d4;
    printf("Enter the distance(km):");
    scanf("%f",d1);

    d2 = d1*1000.0;
    d3 = d1*3280.8399;
    d4 = d1*39370.1;
    printf("Distance in meters is %f\n",d2);

    printf("Distance in feets is %f\n",d3);

    printf("Distance in inches is %f",d4);
    return 0;
}