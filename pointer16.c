//  •	Sort array using pointers.
#include<stdio.h>
int main()
{
    int temp=0,a[20],*aptr,i,j,n;
    printf("Enter A Size Of An Array :\n");
    scanf("%d",&n);
    aptr=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",aptr);
        aptr++;
    }
    aptr=a;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(aptr+i)>*(aptr+j))
            {
                temp=*(aptr+i);
                *(aptr+i)=*(aptr+j);
                *(aptr+j)=temp;
            }
        }
    }
    aptr=a;
    for(i=0;i<n;i++)
    {
        printf("%d ",*aptr);
        aptr++;
    }
}