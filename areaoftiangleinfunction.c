#include <stdio.h>
#include <math.h>
float area(float a,float b,float c);
int main()
{
    float a,b,c,z;
    printf("Enter the three sides of triangle :");
    scanf("%f %f %f",&a ,&b,&c);
    z = area(a,b,c);
    printf("Area of triangle is %f",z);
    return 0;
}
float area (float a,float b ,float c)
{
    float s,x;
    s = (a+b+c)/3;
    x = sqrt(s*(s-a)*(s-b)*(s-c));
    return (s);
}