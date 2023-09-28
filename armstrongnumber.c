#include <stdio.h>
int main()
{
    int n,i,r,s;
    while(i<=500){
        n =i;
        s = 0;
        while(n){
            r = n%10;
            s = s+(r*r*r);
            n = n/10;
        }
        if(i == s){
            printf("Armstrong number is %d\n",i);
        }
        i++;
    }
}