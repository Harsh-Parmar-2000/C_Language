//  •	Merge two arrays to the third array.
#include<stdio.h>
int main()
{
    int n,a[20],b[20],c[20],i,lima=0,limb=0,limc=0;
    printf("Enter Size Of Array Number 1 :");
    scanf("%d",&lima);
    printf("\nEnter Size Of Array Number 2 :");
    scanf("%d",&limb);
    limc=lima+limb;
    for(i=0;i<lima;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limb;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<lima;i++)
    {
        c[i]=a[i];
    }
    
    for(i=0;i<limb;i++)
    {
        c[lima+i]=b[i];
    }
    printf("Merge =\n");
    for(i=0;i<limc;i++)
    {
        printf("%d ",c[i]);
    }
}