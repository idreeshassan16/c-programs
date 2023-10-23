#include <stdio.h>
 
int main()
{
    float a[1000],min,max;
    int i,n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %f",min);
          printf("\nmaximum of array is : %f",max);
 
 
    return 0;
}