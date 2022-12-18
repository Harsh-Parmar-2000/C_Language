//  •	Print all unique elements in the array
#include<stdio.h>
int main()
{
    int n,arr[20],flag=0,i,j,k,unique[20];
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nUnique:\n");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                } 
                j--;
                n--;
            }
        }
        if(flag==0)
        {
            printf("%d ",arr[i]);
        }
     }
    // for(i=0;i<n;i++)
    // {
    //     if(unique[i]!=i)
    //     {
    //         printf("%d ",arr[i]);
    //     }
    // }
}