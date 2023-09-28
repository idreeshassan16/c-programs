#include <stdio.h>
int main()
{
    int i=0;
    printf("Ascii values :");
    while(i<=500)
    {
        printf("%d = %c\n",i,i);
        i++;
    }
    return 0;
}