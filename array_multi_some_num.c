#include <stdio.h> /* the array is modified array is multiplied by some number*/
void modify(int *a,int n);
int main()
{
    int i;
    static int array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("\noriginal array:\n");
    for(i = 0;i<10;i++)
    {
        printf(" %d",array[i]);
    }
    modify(array,10);
    printf("\n\nmodified array is:");
    for (i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
void modify(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *a = *a*3;
        a++;
    }
}