//  •	Copy one array to another using pointer.
#include<stdio.h>
int main()
{
    int i,n,arr[20],barr[20];
    int * ptr,* bptr;
    ptr=arr;
    printf("Enter How Many Element U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    bptr=barr;
    for(i=0;i<n;i++)
    {
        *bptr=*ptr;
        ptr++;
        bptr++;
    }
    ptr=arr;
    bptr=ptr;
    for(i=0;i<n;i++)
    {
        printf("%d ",*bptr);
        bptr++;
    }
}