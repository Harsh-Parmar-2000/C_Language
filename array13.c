//  •	Count the total number of negative elements in an array
#include<stdio.h>
int main()
{
    int n,arr[20],i,count=0;
    printf("Enter How Much Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    printf("Count of Negative Number =%d",count);
}