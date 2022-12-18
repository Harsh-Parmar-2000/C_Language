//  •	Read and print elements of the array. – using recursion.
#include<stdio.h>
int read(int a[],int,int);
int print(int a[],int i,int e);
int main()
{
    int a[20],n,i=0;
    printf("Enter Elements Of Array : ");
    scanf("%d",&n);
    read(a,i,n);
    print(a,i,n);
}
int read(int a[],int i,int e)
{
    if(i<e)
        scanf("%d",&a[i]);
    else
        return 1;
    return read(a,i+1,e);
}
int print(int a[],int i,int e)
{
    if(i<e)
    {
        printf("%d ",a[i]);
    }
    else
    return 1;
    return print(a,i+1,e);
}