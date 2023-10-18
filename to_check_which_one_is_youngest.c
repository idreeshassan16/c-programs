#include <stdio.h>
int main ()
{
    int age_r,age_s,age_a;
    printf("Enter the ages of ram,shyam and ajay:");
    scanf("%d %d %d",&age_r,&age_s,&age_a);
    if((age_r >age_s && age_r > age_a) || (age_s > age_r && age_s > age_a) || (age_a > age_r && age_a > age_s))
    printf("youngest one is %d");
}