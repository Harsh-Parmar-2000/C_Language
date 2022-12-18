//  •	Insert an element in an array.
#include<stdio.h>
int main()
{
    int n,arr[20],i,new,pos;
    printf("Enter How Many Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Value Of A New Element :");
    scanf("%d",&new);
    printf("Enter Position Of A New Element :");
    scanf("%d",&pos);
    pos--;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=new;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}