//  •	Find a maximum and minimum element in an array. – using recursion.
#include<stdio.h>
int maximum(int a[],int,int,int);
int minimum(int a[],int,int,int);
int main()
{
    int m=0,mi=0,i,n,d,e,a[20];
    printf("Enter How Many Element U Want In Ur Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=maximum(a,n,0,m);
    e=minimum(a,n,0,mi);
    printf("Maximum = %d\n",d);
    printf("Minimum = %d\n",e);
}
int maximum(int array[],int size,int i,int max)
{
    if(i<size)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    else
    return max;
    maximum(array,size,i+1,max);
}
int minimum(int array[],int size,int i,int min)
{
    if(i<size)
    {
            if(array[i]<array[min])
            {
                     array[min]=array[i];
            }
    }
    else
    return array[min];
    minimum(array,size,i+1,min);
}