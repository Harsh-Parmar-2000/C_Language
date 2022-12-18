//  •	Delete an element from an array at the specified position.
#include<stdio.h>
int main()
{
    int n,arr[20],pos,i;
    printf("Enter How Much Element U Want In UR Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position TO Delete Element Of Array : ");
    scanf("%d",&pos);
    pos--;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}