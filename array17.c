//  •	Count frequency of each element in an array.
#include<stdio.h>
int main()
{
    int n,arr[20],i,j,k,count=1,max=0,high=0;
    printf("Enter How Many Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {    
               for(k=j;k<n;k++)
               {
                   arr[k]=arr[k+1];
               }
               count++;
               j--;
               n--;
           }
        }
               if(count>max)
               {
                   max=count;
                   high=i;
               }
        printf("Frequency Of %d is %d\n",arr[i],count);
    }
    printf("\n\nhigher Frequency Of %d is %d\n",arr[high],max);       
}