//  •	Find the reverse of an array.
#include<stdio.h>
int main()
{
    int n,i,arr[20];
    printf("Enter Size Of Array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}