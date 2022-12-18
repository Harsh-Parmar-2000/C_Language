//  •	Input and print array elements using a pointer.
#include<stdio.h>
int main()
{
    int arr[10],n,i;
    int *ptr=arr;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}