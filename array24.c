//  •	Search an element in an array
#include<stdio.h>
int main()
{
    int n,arr[20],search=0,i,count=0;
    printf("Enter Size Of An Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter A Number To Search In An Array :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==arr[i])
        {
            printf("Found At %d Place Value = %d\n",i,arr[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("Not Found");
    }
}