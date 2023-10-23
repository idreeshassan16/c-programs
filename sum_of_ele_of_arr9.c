#include <stdio.h>
int main()
{
    int ar[3] = {23,34,43};
    int i,sum_arr =0;
    for(i=0; i<3;i++)
    {
        sum_arr = sum_arr + ar[i];
    }
    printf("sum of an array is %d " ,sum_arr);
}