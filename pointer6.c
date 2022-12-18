//  •	Reverse an array using pointers.
#include<stdio.h>
int main()
{
    int i,n,arr[20];
    int * ptr;
    printf("Enter How Many Element U Want :\n");
    scanf("%d",&n);
    printf("Enter %d Elements :\n",n);
    ptr=arr;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    for(i=0;i<n;i++)
    {
        ptr--;
        printf("%d ",*ptr);
    }
}