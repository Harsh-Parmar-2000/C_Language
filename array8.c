//  •	Print all negative elements in an array.
#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("Enter Element U Want In An Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAll Negative Numbers are :- ");
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            printf("%d ",a[i]);
        }
    }
}