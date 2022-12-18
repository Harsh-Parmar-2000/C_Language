//  •	Swap two arrays using pointers.
#include<stdio.h>
int main()
{
    int i,n,temp=0,a[20],b[20];
    int * aptr,* bptr;
    aptr=a;
    bptr=b;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    printf("Before Print Of Swap A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",aptr);
        aptr++;
    }
    printf("Before Print Of Swap B:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",bptr);
        bptr++;
    }
    aptr=a;
    bptr=b;
    for(i=0;i<n;i++)
    {
        temp=*aptr;
        *aptr=*bptr;
        *bptr=temp;
        aptr++;
        bptr++;
    }
    
    printf("\nPrint Of Swap A:\n");
    aptr=a;
    bptr=b;
    for(i=0;i<n;i++)
    {
        printf("%d ",*aptr);
        aptr++;
    }
    printf("\nPrint Of Swap B:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*bptr);
        bptr++;
    }
}