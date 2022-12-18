//  •	Count the total number of duplicate elements in an array
#include<stdio.h>
int main()
{
    int n,arr[20],i,j,count=0;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    printf("Total Number Of Duplicate Element %d",count);
}